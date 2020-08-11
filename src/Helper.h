/**
 * Copyright (c) 2020, mll <coleflowersma at gmail dot com>
 * All rights reserved.
 */
#ifndef HELPER_H_
#define HELPER_H_
#include <iostream>
#include <sys/stat.h>
#include <unistd.h>
#include <vector>
#include <string.h>

class Helper {
public:
    static void write_to_file(const char *json, const char *dstFile);
    static int isDirectory(const char *path);
    static bool isExistFile(const char *path);
    static bool isBaseType(std::string name);
    static bool replace(std::string& str, const std::string& from, const std::string& to);
    static void join(const std::vector<std::string>& v, char c, std::string& s);
    static std::vector<std::string> split(const std::string& str, const std::string& delim);
};

#endif