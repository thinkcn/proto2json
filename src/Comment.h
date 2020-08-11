/**
 * Copyright (c) 2020, mll <coleflowersma at gmail dot com>
 * All rights reserved.
 */
#ifndef Comment_H_
#define Comment_H_
#include <iostream>

class Comment {
public:
  void Set(int,int,std::string);
  void setSingleLine(bool singleLine);
  bool isSingleLine();
  int getStart();
  int getTotal();
  std::string getText();
private:
  int start;
  int total;
  bool singleLine;
  std::string text;
};

#endif 