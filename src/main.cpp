/**
 * Copyright (c) 2020, mll <coleflowersma at gmail dot com>
 * All rights reserved.
 */
#include <stdio.h> 
#include <unistd.h>
#include <sys/stat.h>
#include <iostream>
#include <string>
#include <libgen.h>
#include "antlr4-runtime/antlr4-runtime.h" 
#include "json/json.h"
#include "Protobuf3Parser.h"
#include "Protobuf3Lexer.h"
#include "AVisitor.h"
#include "Comment.h"
#include "Helper.h"
#include "version.h"

#define _GNU_SOURCE

using namespace std;
using namespace antlr4;

void usage(void) {
    fprintf(stderr,
    "protojson %s\n"
    "\n"
    "Usage: protojson [OPTIONS] PROTO_FILES\n"
    "\n"
    "Options:\n"
    "  -p             Output json path (default : .)\n"
    "  -e             Generate engine, json or api (default : json).\n"
    "  -d             Open debug mode.\n" 
    "  -c             Output copyright.\n"
    "  --help         Output this help and exit.\n"
    "  --version      Output version and exit.\n"
    "\n",
        PROTOJSON_VERSION);
    exit(1);
}

void version(void)
{
    fprintf(stderr, "protojson %s\n", PROTOJSON_VERSION);
    exit(1);
}
 

int main(int argc, const char* argv[]) {
    if (argc <= 1) {
        usage();
        return 1;
    }

    bool isDebug = false;
    std::string engine = "json";
    std::string outPuth = "./";
    std::string protoFile = argv[argc-1];

    for (int i = 1; i < argc; i++) {
        int lastarg = i==argc-1;

        if (!strcmp(argv[i],"-h") && lastarg) {
            usage();
        } else if (!strcmp(argv[i],"--help")) {
            usage();
        } else if(!strcmp(argv[i], "--version")) {
            version();
        } else if (!strcmp(argv[i], "-c")) {
            // cmd = "copyright";
            // TODO
        } else if (!strcmp(argv[i], "-p") && !lastarg) {
            outPuth = argv[i+1];
            i++;
        } else if (!strcmp(argv[i], "-e") && !lastarg) {
            engine = argv[i+1];
            i++;
        } else if (!strcmp(argv[i], "-d")) {
            isDebug = true;
        }
    }

    if (access(outPuth.data(), F_OK) == -1 || !Helper::isDirectory(outPuth.data())) {
        printf("\n");
        printf("Output json path is not exists\n");
        printf("\n");
        exit(1);
    }

    if(access(protoFile.data(), F_OK) != -1 && !Helper::isDirectory(protoFile.data())) {
        // file exists
    } else {
        printf("\n");
        printf("proto_file path is not set or proto_file path is not exists\n");
        printf("\n");
        exit(1);
    }

    // 当前执行目录
    char *path = NULL;
    path = getcwd(NULL,0);
    std::string runPath = std::string(path);

    // 当前解析proto所在目录
    std::string protoPath = std::string(dirname(strdup(protoFile.data())));
    std::string protoName = std::string(basename(strdup(protoFile.data())));
    std::vector<std::string> tmp = Helper::split(protoName, ".");
    protoName = tmp[0];

    const char* name = protoFile.data();
    std::ifstream stream;
    stream.open(name);
    ANTLRInputStream input(stream);
    Protobuf3Lexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    Protobuf3Parser parser(&tokens);
    parser.removeErrorListeners();
    lexer.removeErrorListeners(); 

    Protobuf3Parser::ProtoContext* tree = parser.proto();
 
    int channel = tokens.getNumberOfOnChannelTokens();
    std::vector<Token *> allToken = tokens.getTokens();
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

            // printf("total:%d\n", total);
            // printf("startLine:%d\n", startLine);
            // printf("comment:\n%s\n", comment.c_str());
            // break;
        }  
    }

    // TODO: 解析枚举 为整数
    // TODO: 注释掉service部分rpc之后报错

    AVisitor visitor;
    visitor.setMessageGot(false);
    visitor.setProtoPath(protoPath);
    visitor.setRunPath(runPath);
    visitor.setComments(comments);
    visitor.setDebug(isDebug);
    visitor.setOutPath(outPuth);
    visitor.setEngine(engine);
    visitor.setProtoName(protoName);
    visitor.setProtoBasePath(protoPath);

    // 解析message
    visitor.visitProto(tree);
    visitor.setMessageGot(true);
    // 解析service
    visitor.visitProto(tree);

    Json::Value service = visitor.getService();
    std::string out = service.toStyledString();
    //printf("json:%s\n", out.data());
    return 0;
}