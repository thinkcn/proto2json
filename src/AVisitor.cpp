/**
 * Copyright (c) 2020, mll <coleflowersma at gmail dot com>
 * All rights reserved.
 */
#include <stdio.h>
#include <sys/stat.h>
#include <libgen.h>
#include <dirent.h>
#include "antlr4-runtime.h"
#include "AVisitor.h"
#include "json/json.h"
#include "Helper.h"
#include "version.h"
#include "Protobuf3Parser.h"
#include "Protobuf3Lexer.h"

static inline void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int ch) {
        return !std::isspace(ch);
    }));
}

// trim from end (in place)
static inline void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](int ch) {
        return !std::isspace(ch);
    }).base(), s.end());
}

// trim from both ends (in place)
static inline void trim(std::string &s) {
    ltrim(s);
    rtrim(s);
}

void eraseLeftStr(std::string & mainStr, const std::string & toErase)
{
    size_t pos = std::string::npos;

    if (mainStr.find(toErase) == 0) {
        mainStr.erase(0, toErase.length());
    }
}

void eraseRightStr(std::string & mainStr, const std::string & toErase)
{
    //TODO : 适配 eraseRightStr("leftleftleft", "left");

    size_t pos = mainStr.length() - toErase.length();
    if (mainStr.find(toErase) == pos) {
        mainStr.erase(pos, toErase.length());
    }
}


/*
 * Erase all Occurrences of given substring from main string.
 */
void eraseAllSubStr(std::string & mainStr, const std::string & toErase)
{
    size_t pos = std::string::npos;
    // Search for the substring in string in a loop untill nothing is found
    while ((pos  = mainStr.find(toErase) )!= std::string::npos)
    {
        // If found then erase it from string
        mainStr.erase(pos, toErase.length());
    }
}

/*
 * Erase all Occurrences of all given substrings from main string using Pre C++11 stuff
 */
void eraseSubStringsPre(std::string & mainStr, const std::vector<std::string> & strList)
{
    // Iterate over the given list of substrings. For each substring call eraseAllSubStr() to
    // remove its all occurrences from main string.
    for (std::vector<std::string>::const_iterator it = strList.begin(); it != strList.end(); it++)
    {
        eraseAllSubStr(mainStr, *it);
    }
}

void AVisitor::setDebug(bool _isDebug)
{
    isDebug = _isDebug;
}
void AVisitor::setEngine(std::string _engine)
{
    engine = _engine;
}
void AVisitor::setOutPath(std::string _outPath)
{
    outPath = _outPath;
}
void AVisitor::setMessageGot(bool _messageGot)
{
    messageGot = _messageGot;
}
void AVisitor::setProtoPath(std::string _protoPath)
{
    protoPath = _protoPath;
}
void AVisitor::setProtoName(std::string _protoName)
{
    protoName = _protoName;
}
void AVisitor::setProtoBasePath(std::string _protoBasePath)
{
    protoBasePath = _protoBasePath;
}

antlrcpp::Any AVisitor::visitRpc(Protobuf3Parser::RpcContext *context)
{
    antlr4::Token *token=  context->rpcName()->getStart();
     std::string word = token->getText(); 
     // printf("rpc - %s\n", word.data());
    return visitChildren(context);
}

antlrcpp::Any AVisitor::visitImportStatement(Protobuf3Parser::ImportStatementContext *context)
{
    std::string import = context->StrLit()->getSymbol()->getText();
    eraseLeftStr(import, "\"");
    eraseRightStr(import, "\"");
    //TODO : 了解 proto 的 import 是否可以使用绝对路径

    std::string importPath = protoBasePath + "/" + import.data();
    isDebug && printf("import : %s (name=%s)\n", importPath.data(), import.data());

    if (import.rfind("google/protobuf", 0) == 0) {
        // google protobuf value
    } else {
        // 解析相对路径
        std::string pathPre = std::string(dirname(strdup(import.data())));
        if (!Helper::isExistFile(importPath.data()) && !pathPre.empty()) {
            std::string protoName = std::string(basename(strdup(import.data())));
            std::string pathCopy = protoBasePath;
            eraseRightStr(pathCopy, pathPre);

            importPath = pathCopy + import.data();
        }

        // 解析
        parseImportPath(importPath);
    }

    return visitChildren(context);
}

void AVisitor::parseImportPath(std::string importPath)
{
    if (!Helper::isExistFile(importPath.data())) { 
        //printf("import:%s is not exists!\n", importPath.data());
        //exit(1);
    }

    std::ifstream stream;
    stream.open(importPath);
    antlr4::ANTLRInputStream input2(stream);
    Protobuf3Lexer lexer2(&input2);
    antlr4::CommonTokenStream tokens(&lexer2);
    Protobuf3Parser parser2(&tokens);
    parser2.removeErrorListeners();
    lexer2.removeErrorListeners();

    Protobuf3Parser::ProtoContext* tree = parser2.proto();

    int channel = tokens.getNumberOfOnChannelTokens();
    std::vector<antlr4::Token *> allToken = tokens.getTokens();
    std::vector<Comment> comments;
    for (size_t i =0; i < allToken.size(); i ++) {
        if (allToken[i]->getType() == Protobuf3Parser::COMMENT 
            || allToken[i]->getType() == Protobuf3Parser::LINE_COMMENT) {

            std::string comment = allToken[i]->getText();
            Helper::replace(comment, "\r", "");
            size_t total = std::count(comment.begin(), comment.end(), '\n') + 1;
            size_t startLine = allToken[i]->getLine();

            Comment com;
            com.Set(startLine, total, allToken[i]->getText());

            if (allToken[i]->getType() == Protobuf3Parser::LINE_COMMENT) {
                // 
                com.setSingleLine(true);
            }

            comments.push_back(com);
        }  
    }

    std::string protoName = std::string(basename(strdup(importPath.data())));
    //std::string protoPath = std::string(dirname(strdup(importPath.data())));

    AVisitor visitor;
    visitor.setMessageGot(false);
    visitor.setProtoPath(protoPath);
    visitor.setProtoName(protoName);
    visitor.setComments(comments);
    visitor.setDebug(isDebug);
    visitor.setOutPath(outPath);
    visitor.setEngine(engine);
    visitor.setProtoBasePath(protoBasePath);

    // 解析message
    visitor.visitProto(tree);

    // importMsgs = visitor.msgs;
    importMsgs.insert(std::end(importMsgs), std::begin(visitor.msgs), std::end(visitor.msgs));

    if (visitor.importMsgs.size() > 0) {
        importMsgs.insert(std::end(importMsgs), std::begin(visitor.importMsgs), std::end(visitor.importMsgs));
    }
}


antlrcpp::Any AVisitor::visitPackageStatement(Protobuf3Parser::PackageStatementContext *context)
{
    std::vector<antlr4::tree::TerminalNode *> idens = context->fullIdent()->Ident();

    std::vector<std::string> idenArr;
    for (int m = 0; m < idens.size(); ++m)
    {
        std::string tmp = idens[m]->getSymbol()->getText();
        idenArr.push_back(tmp);
    }

    std::string res;
    Helper::join(idenArr, '.', res);
    package = res;
    // printf("package:%s\n", res.data());

    return visitChildren(context);
}

antlrcpp::Any AVisitor::visitMessage(Protobuf3Parser::MessageContext *context) 
{
    parseMsg(context);
    return visitChildren(context);
}

std::string AVisitor::getFullPackage()
{
    if (package.empty() || package.length() == 0) {
        return "";
    }
    std::string res = package + std::string(".");
    return res;
}

std::string AVisitor::getFullPath(std::string fileName)
{
    std::string path;
    if (!strcmp(engine.data(), "json")) {
        path = outPath + "/" + fileName;
    } else {
        std::string pathPre = outPath + "/_tmp/";
        if (access(pathPre.data(), F_OK) != -1) {

        } else {
            if (mkdir(pathPre.data(), 0755) == -1) {   
                printf("Create Tmp Dir faile\n");
                exit(1);
            }
        }

        path = pathPre + fileName;
    }
    return path;
}

void AVisitor::parseMsg(Protobuf3Parser::MessageContext *context)
{
    antlr4::Token *token = context->messageName()->Ident()->getSymbol();
    std::string messageName = token->getText();

    Json::Value msg = Json::Value();
    msg["name"] = messageName.data();

    isDebug && printf("messageName:%s\n", messageName.data());

    std::vector<Protobuf3Parser::FieldContext *> fields = context->messageBody()->field();
    for (int i = 0; i < fields.size(); ++i)
    {
        Json::Value fieldItem = Json::Value();
        // is repeated
        bool isRepeated = false;
        std::string fieldStart = fields[i]->start->getText().data();
        if (strcmp(fieldStart.data(), "repeated") == 0) {
            isRepeated = true;
        }

        fieldItem["isRepeated"] = isRepeated;

        // name
        std::string fieldName = fields[i]->fieldName()->Ident()->getSymbol()->getText();
        fieldItem["name"] = fieldName.data();

        // number
        std::string fieldNumber = fields[i]->fieldNumber()->IntLit()->getSymbol()->getText();
        fieldItem["number"] = fieldNumber.data();
        
        // 类型
        Protobuf3Parser::TypeRuleContext *rule = fields[i]->typeRule();
        std::string fieldType = rule->start->getText();
        Protobuf3Parser::MessageOrEnumTypeContext *typeCxt = rule->messageOrEnumType();
        if (typeCxt) {
            antlr4::Token *typeToken = typeCxt->messageOrEnumName()->Ident()->getSymbol();
            
            fieldType = typeToken->getText();
        }
        fieldItem["type"] = fieldType.data();

        std::string lineComment = "";
        std::string comment = "";

        for (int k = 0; k < comments.size(); ++k)
        {
            if (!comments[k].isSingleLine() 
                && comments[k].getStart() + comments[k].getTotal() == fields[i]->start->getLine()) {
                comment = comments[k].getText();
                break;
            }
            if (comments[k].isSingleLine() && comments[k].getStart() == fields[i]->start->getLine()) {
                comment = comments[k].getText();//.data();
                break;
            }
        }

        fieldItem["comment"] = comment.data();

        // printf("comment:%s\n", comment.data());
         
        // debug && printf("\t%s%s %s=%s; %s\n", 
        //     isRepeated?"repeated ":"", 
        //     fieldType.data(), 
        //     fieldName.data(), 
        //     fieldNumber.data(), 
        //     comment.data());
        
        msg["fields"].append(fieldItem);
    }

    Json::StreamWriterBuilder builder;
    const std::string json = Json::writeString(builder, msg);

    // service["messages"].append(msg);

    std::string jsonPath = getMessagePath(messageName);
    
    isDebug && (!messageGot) && printf("%s : %s\n", jsonPath.data(), json.data());

    if (!messageGot) {
        msgs.push_back(msg);
        Helper::write_to_file((const char*)json.data(), jsonPath.data());
    }
}

std::string AVisitor::getMessagePath(std::string messageName)
{
    std::string jsonFile = getFullPackage() + messageName + std::string(".json");
    std::string jsonPath = getFullPath(jsonFile);
    return jsonPath;
}

antlrcpp::Any AVisitor::visitService(Protobuf3Parser::ServiceContext *context)
{
    antlr4::Token *token=  context->serviceName()->getStart();
    std::string serviceName = token->getText();
    std::vector<Protobuf3Parser::RpcContext *> rpcArr = context->rpc();
    std::string serviceTag = serviceName;

    Json::Value api = Json::Value();
    api["proto2json"] = PROTOJSON_VERSION;

    service["name"] = serviceName.data();
    service["start"] = (int)token->getLine();

    isDebug && printf("service : %s (rpc size : %d)\n", serviceName.data(), (int)rpcArr.size()); 

    // 注释
    std::string serviceComment = "";
    for (int i = 0; i < comments.size(); ++i) {
        if (!comments[i].isSingleLine()
            && comments[i].getStart() + comments[i].getTotal() == token->getLine()) {
            serviceComment = comments[i].getText().data();
            break;
        }
    }

    Json::Value serviceCom = parseComment(serviceComment);
    service["commentJson"] = serviceCom;
    std::string controller = serviceCom.get("controller", serviceName).asString();

    // 接口解析
    if (!strcmp(engine.data(), "api") && messageGot) {
        Json::Value obj = parseComment(serviceComment);
        std::string version = obj.get("version", "last").asString();
        std::string tag = obj.get("tag", serviceName).asString();
        std::string title = obj.get("title", tag).asString();
        if (!tag.empty()) {
            serviceTag = tag;
        }

        Json::Value apiInfo;
        apiInfo["title"] = title;
        apiInfo["version"] = version;
        apiInfo["mark"] = serviceCom.get("mark", serviceName).asString();
        api["info"] = apiInfo;

        std::string schemes = obj.get("schemes", "https").asString();
        std::vector<std::string> schemeArr = Helper::split(schemes, "/");

        for (int m = 0; m < schemeArr.size(); ++m)
        {
            api["schemes"].append(schemeArr[m]);
        }
    }

    service["comment"] = serviceComment;

    for (size_t i =0; i < rpcArr.size(); i ++) {
        Protobuf3Parser::RpcContext *rpc = rpcArr[i]; 
        
        antlr4::Token *tokenItem = rpc->rpcName()->getStart();
        std::string word = tokenItem->getText(); 

        isDebug && printf("%s : rpc - %s\n", serviceName.data(), word.data());

        Json::Value item; 
        item["name"] = word.data(); 
        item["start"] = (int)tokenItem->getLine();

        // TODO 考虑没有参数，或者返回
        // 解析请求以及响应参数
        Protobuf3Parser::MessageTypeContext *param = rpc->messageType(0);
        Protobuf3Parser::MessageTypeContext *response = rpc->messageType(1);

        std::string parName = param->messageName()->start->getText();
        std::string responseName = response->messageName()->start->getText();
        item["paramName"] = parName;
        item["responseName"] = responseName;

        isDebug && printf("param : %s\n", parName.data());
        isDebug && printf("response : %s\n", responseName.data());
        isDebug && printf("-------------- %s\n", word.data());

        Json::Value cJson;
        for (int j = 0; j < comments.size(); ++j) {
            if (comments[j].getStart() + comments[j].getTotal() == tokenItem->getLine()) {

                std::string comment = comments[j].getText();
                item["comment"] = comment.data();

                if (!strcmp(engine.data(), "api")) {
                    cJson = parseComment(comment);
                    item["commentJson"] = cJson;

                    controller = cJson.get("controller", controller).asString();
                }

                break;
            }
        }

        if (!strcmp(engine.data(), "api") && messageGot) {

            std::string tag = cJson.get("tag", serviceTag).asString();
            std::string method = cJson.get("method", "post").asString();
            transform(method.begin(), method.end(), method.begin(), ::tolower);

            Json::Value content;
            content["summary"] = cJson.get("title", "").asString();

            if (!strcmp(method.data(), "post")) {
                content["consumes"].append("application/json");
            } else {
                content["consumes"].append("text/plain");
            }
            content["tags"].append(tag);

            std::string apiPath = controller + "/" + word;

            Json::Value pathBean;
            pathBean[apiPath][method] = content;

            // 请求
            Json::Value header = Json::Value();
            header["name"] = "Authorization";
            header["in"] = "header";
            header["description"] = "Authorization";
            header["required"] = true;
            header["type"] = "string";
            content["parameters"].append(header);

            Json::Value reqBody = Json::Value();
            reqBody["name"] = "root";
            reqBody["in"] = "body";
            Json::Value body = parseParamBody(parName);
            reqBody["schema"] = body;
            content["parameters"].append(reqBody);

            // 响应
            Json::Value resBody = parseResBody(responseName);
            Json::Value response = Json::Value();
            response["description"] = "successful operation";
            response["schema"]["type"] = "object";
            response["schema"]["properties"] = resBody;
            response["schema"]["title"] = responseName;
            response["schema"]["$$ref"] = "#/definitions/"+responseName;
            content["responses"]["200"] = response;

            api["paths"][apiPath][method] = content;
        } 

        service["rpcs"].append(item);
    }

    std::string apiJson = api.toStyledString();
    // printf("%s\n", apiJson.data());

    if (messageGot) {
        if (!strcmp(engine.data(), "api")) {
            std::string apiPath = outPath + "/" + "api." + protoName + ".json";
            Helper::write_to_file((const char*)apiJson.data(), apiPath.data());
        }
    }

    std::string fileName = serviceName + ".json";
    std::string filePath = getFullPath(fileName);
    Helper::write_to_file((const char*)service.toStyledString().data(), filePath.data());

    return visitChildren(context);
}

// 解析响应值
Json::Value AVisitor::parseResBody(std::string responseName)
{
    Json::Value body = Json::Value();
    if (responseName.empty()) {
        return body;
    }

    // message 结构体
    Json::Value paramObj;

    std::string paramPath = getMessagePath(responseName);
    std::ifstream t(paramPath.data());
    std::stringstream buffer;
    buffer << t.rdbuf();
    std::string paramJson = buffer.str();

    if (paramJson.length() == 0) {
        for (int i = 0; i < importMsgs.size(); ++i) {
            // printf("--- %s\n", importMsgs[i]["name"].asString().data());
            if (!strcmp(responseName.data(), importMsgs[i]["name"].asString().data())) {
                paramObj = importMsgs[i];
                break;
            }
        }
    } else {
        JSONCPP_STRING err;
        const auto rawJsonLength = static_cast<int>(paramJson.length());
        Json::CharReaderBuilder builder;
        const std::unique_ptr<Json::CharReader> reader(builder.newCharReader());
        if (!reader->parse(paramJson.c_str(), paramJson.c_str() + rawJsonLength, &paramObj, &err)) {
            // TODO: 处理异常 & 错误
            // std::cout << "error" << std::endl;
            // return EXIT_FAILURE;
        }
    }
   
    
    Json::Value val_array = paramObj["fields"];  
    int iSize = val_array.size();  
    for (int nIndex = 0; nIndex < iSize; ++ nIndex) { 
        Json::Value paramBean = val_array[nIndex];
        std::string pName = paramBean.get("name", "").asString();
        std::string pComment = paramBean.get("comment", "").asString();
        Json::Value pCommentObj = parseComment(pComment);
        bool isRepeated = paramBean.get("isRepeated", false).asBool();

        std::string type = paramBean.get("type", "string").asString();
        std::string format = paramBean.get("type", "string").asString();
        if (!strcmp(format.data(), "int32")
            || !strcmp(format.data(), "int64")
            || !strcmp(format.data(), "uint32")
            || !strcmp(format.data(), "fixed32")
            || !strcmp(format.data(), "sfixed32")
            || !strcmp(format.data(), "sint32")) {
            type = "integer";
        }

        if (Helper::isBaseType(format) && isRepeated) {
            Json::Value fieldBean = Json::Value();
            fieldBean["type"] = "array";
            fieldBean["items"]["type"] = type;
            fieldBean["description"] = pCommentObj.get("desc", "").asString();
     
            body[pName] = fieldBean; 
        }  
        else if(!Helper::isBaseType(format)) {
            
            Json::Value fieldBean = Json::Value();
            fieldBean["type"] = isRepeated ? "array" : "object";
            fieldBean["description"] = pCommentObj.get("desc", format).asString();
        
            // -
            Json::Value objTmp = parseParamBody(format);
            
            if (isRepeated) {
                fieldBean["items"]["title"] = format;
                fieldBean["items"]["$$ref"] = "#/definitions/"+format; 
                fieldBean["items"]["type"] = "object";// type;
                fieldBean["items"]["properties"] = objTmp["properties"];
            } else {
                fieldBean["properties"] = objTmp["properties"];
            }

            body[pName] = fieldBean;
            
        } 
        else {
            Json::Value fieldBean = Json::Value();
            fieldBean["type"] = type;
            fieldBean["format"] = format;
            fieldBean["description"] = pCommentObj.get("desc", "").asString();
     
            body[pName] = fieldBean;
        }
    }

    return body;
}

Json::Value AVisitor::parseParamBody(std::string parName)
{
    Json::Value body = Json::Value();
    if (parName.empty()) {
        return body;
    }
    // message 结构
    Json::Value paramObj;

    //TODO : 参数
    std::string paramPath = getMessagePath(parName);
    std::ifstream t(paramPath.data());
    std::stringstream buffer;
    buffer << t.rdbuf();
    std::string paramJson = buffer.str();

    if (paramJson.length() == 0) {
        for (int i = 0; i < importMsgs.size(); ++i) {
            if (!strcmp(parName.data(), importMsgs[i]["name"].asString().data())) {
                paramObj = importMsgs[i];
                break;
            }
        }
    } else {
        JSONCPP_STRING err;
        const auto rawJsonLength = static_cast<int>(paramJson.length());
        Json::CharReaderBuilder builder;
        const std::unique_ptr<Json::CharReader> reader(builder.newCharReader());
        if (!reader->parse(paramJson.c_str(), paramJson.c_str() + rawJsonLength, &paramObj, &err)) {
            // TODO: 处理异常 & 错误
            // std::cout << "error" << std::endl;
            // return EXIT_FAILURE;
        }
    }
    // printf("parName:%s (%d)\n", parName.data(), paramJson.length());

    body["type"] = "object";
    body["title"] = parName;
    body["$$ref"] = "#/definitions/" + parName;

    Json::Value val_array = paramObj["fields"];  
    int iSize = val_array.size();  
    for (int nIndex = 0; nIndex < iSize; ++ nIndex) { 
        Json::Value paramBean = val_array[nIndex];
        std::string pName = paramBean.get("name", "").asString();
        std::string pComment = paramBean.get("comment", "").asString();
        Json::Value pCommentObj = parseComment(pComment);


        std::string fieldType = paramBean.get("type", "string").asString();;
        if (Helper::isBaseType(fieldType)) {

        } else {
            // 解析数组
            bool isRepeated = paramBean.get("isRepeated", false).asBool();

            if (!strcmp(fieldType.data(), parName.data())) {
                // body["properties"][pName] = Json::Value::null;

                if (!isRepeated) {
                    body["properties"][pName] = Json::Value::null;
                } else {
                    Json::Value arr = Json::Value();
                    arr["type"] = "array";
                    arr["$$ref"] = "#/definitions/" + fieldType;
                    arr["items"]["type"] = "object";
                    //arr["items"]["properties"] = objTmp["properties"];
                    arr["description"] = fieldType;// objTmp["title"];
                    body["properties"][pName] = arr;
                }
                continue;
            }

            Json::Value objTmp = parseParamBody(fieldType);
            if (isRepeated) {

                Json::Value arr = Json::Value(objTmp);
                arr["type"] = "array";
                arr["items"]["type"] = "object";
                arr["items"]["properties"] = objTmp["properties"];
                arr["description"] = objTmp["title"];
                arr.removeMember("properties");
                body["properties"][pName] = arr;
            } else {
                objTmp["description"] = pCommentObj.get("desc", "").asString();
                body["properties"][pName] = objTmp;
            }

            continue;
        }

        Json::Value fieldBean = Json::Value();
        fieldBean["type"] = fieldType;
        fieldBean["format"] = paramBean.get("type", "string").asString();
        fieldBean["description"] = pCommentObj.get("desc", "").asString();

        // body["schema"]["properties"].append(pTmp);

        body["properties"][pName] = fieldBean;

    }  
    return body;
}

std::string AVisitor::formatComment(std::string tmp)
{
    std::vector<std::string> lines = Helper::split(tmp, "\n");
    std::vector<std::string> arr;
    for (int n = 0; n < lines.size(); ++n) {
        std::string _line = lines[n];
        ltrim(_line);
        eraseLeftStr(_line, "*");
        ltrim(_line);

        arr.push_back(_line);
    }

    std::string ttt;
    Helper::join(arr, '\n', ttt);
    return ttt;
}

/**
 * 解析注释
 */
Json::Value AVisitor::parseComment(std::string comment)
{
    if (comment.empty()) {
        return Json::Value();
    }
    // 解析各项注释的含义
    eraseLeftStr(comment, "/**");

    //TODO: 实现 eraseRightStr
    eraseSubStringsPre(comment, {"*/"});

    eraseLeftStr(comment, "//");

    Json::Value bean;

    std::vector<std::string> cmens = Helper::split(comment, "* @");

    if (cmens.size() == 1) {
        trim(comment);
        eraseLeftStr(comment, "*");
        trim(comment);
        bean["desc"] = formatComment(comment);
        return bean;
    } 

    // 
    std::stringstream ss;
    ss << cmens.size();

    for (int m = 0; m < cmens.size(); ++m)
    {
        std::string tmp = cmens[m];
        trim(tmp);
        if (tmp.length() == 0) {
            continue;
        }

        std::vector<std::string> _tmp = Helper::split(tmp, " ");
        // 注释名
        std::string name = _tmp[0];
        eraseLeftStr(tmp, name);

        std::string commentContent = formatComment(tmp);
        bean[name] = commentContent; 
    }

    return bean;
}


void AVisitor::setComments(std::vector<Comment> tmp) {
    comments = tmp;
}

Json::Value AVisitor::getService() {
    return service;
}

