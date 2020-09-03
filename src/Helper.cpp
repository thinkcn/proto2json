/**
 * Copyright (c) 2020, mll <coleflowersma at gmail dot com>
 * All rights reserved.
 */
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <array>
#include <vector>
#include <stdio.h>
#include "Helper.h"

using namespace std;

void Helper::write_to_file(const char *json, const char *dstFile) {
    FILE *fp;
    fp = fopen(dstFile,"w");
    fprintf(fp, "%s", json);

    fclose(fp);
}

// 是否目录
int Helper::isDirectory(const char *path) {
   struct stat statbuf;
   if (stat(path, &statbuf) != 0)
       return 0;
   return S_ISDIR(statbuf.st_mode);
}

// 是否存在文件
bool Helper::isExistFile(const char *path) {
    if(access(path, F_OK) != -1 && !Helper::isDirectory(path)) {
        return true;
    } 
    return false;
}

// 是否基础类型
bool Helper::isBaseType(std::string name) {
    if (name.empty()) {
        return false;
    }
    std::vector<std::string> types = {
        "double", 
        "float", 
        "int32", 
        "int64",
        "uint32", 
        "uint64", 
        "sint32", 
        "sint64",
        "fixed32", 
        "fixed64", 
        "sfixed32", 
        "sfixed64",
        "bool", 
        "string", 
        "bytes"
    };
    bool isBase = false;
    for (int i = 0; i < types.size(); ++i) {
        if (!strcmp(name.data(), types[i].data())) {
            isBase = true;
            break;
        }
    }
   return isBase;
}

// 替换指定字符串
bool Helper::replace(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = str.find(from);
    if(start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}

// 
void Helper::join(const std::vector<std::string>& v, char c, std::string& s) {

   s.clear();

   for (std::vector<std::string>::const_iterator p = v.begin();
        p != v.end(); ++p) {
      s += *p;
      if (p != v.end() - 1)
        s += c;
   }
}

// 
std::vector<std::string> Helper::split(const std::string& str, const std::string& delim) {
    std::vector<std::string> tokens;
    size_t prev = 0, pos = 0;
    do {
        pos = str.find(delim, prev);
        if (pos == std::string::npos) pos = str.length();
        std::string token = str.substr(prev, pos-prev);
        if (!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    }
    while (pos < str.length() && prev < str.length());
    return tokens;
}