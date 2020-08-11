/**
 * Copyright (c) 2020, mll <coleflowersma at gmail dot com>
 * All rights reserved.
 */
#include <iostream>      
#include "Comment.h"                          
using namespace std;

void Comment::Set(int m,int d,std::string y)
{
  start=m; 
  total=d;  
  text=y; 
  singleLine = false;
}

void Comment::setSingleLine(bool _singleLine)
{
    singleLine = _singleLine;
}

bool Comment::isSingleLine()
{
    return singleLine;
}

int Comment::getStart()
{
    return start;
}

int Comment::getTotal() 
{
    return total;
}

std::string Comment::getText() 
{
    return text;
}
