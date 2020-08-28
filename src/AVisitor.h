/**
 * Copyright (c) 2020, mll <coleflowersma at gmail dot com>
 * All rights reserved.
 */
#include <unistd.h>
#include "Protobuf3BaseVisitor.h"
#include "json/json.h"
#include "Comment.h"

class  AVisitor : public Protobuf3BaseVisitor {
public:
    antlrcpp::Any visitRpc(Protobuf3Parser::RpcContext *context) override ;
    antlrcpp::Any visitService(Protobuf3Parser::ServiceContext *context) override ;
    antlrcpp::Any visitMessage(Protobuf3Parser::MessageContext *context) override ;
    antlrcpp::Any visitPackageStatement(Protobuf3Parser::PackageStatementContext *context) override;
    antlrcpp::Any visitImportStatement(Protobuf3Parser::ImportStatementContext *context) override;

    Json::Value getService();
    void setComments(std::vector<Comment>);
    void setDebug(bool isDebug);
    void setEngine(std::string engine);
    void setOutPath(std::string outPath);
    void setMessageGot(bool messageGot);
    void setProtoPath(std::string protoPath);
    void setProtoName(std::string);
    void setProtoBasePath(std::string);
    void setRunPath(std::string);

private:
    Json::Value service;
    // 所有注释
    std::vector<Comment> comments;
    // 当前解析的包名
    std::string package;
    // debug模式 会打印运行过程中的日志
    bool isDebug = false;
    // 存储路径
    std::string outPath = "./";
    // 解析引擎
    std::string engine = "json";
    // message是否解析结束
    bool messageGot = false;
    // 当前解析proto文件的目录
    std::string protoPath;
    // 解析proto的入口文件夹
    std::string protoBasePath;
    // 执行目录
    std::string runPath;
    // 当前解析proto文件名
    std::string protoName;
    // 当前解析完多有message
    std::vector<Json::Value> msgs;
    // 当前import引入message
    std::vector<Json::Value> importMsgs;

private:
    void parseMsg(Protobuf3Parser::MessageContext *context);
    Json::Value parseComment(std::string comment);
    std::string getFullPackage();
    std::string getFullPath(std::string fileName);
    std::string getMessagePath(std::string messageName);
    std::string formatComment(std::string tmp);
    Json::Value parseParamBody(std::string parName);
    Json::Value parseResBody(std::string responseName);

    void parseImportPath(std::string importPath);
};