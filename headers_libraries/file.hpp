#ifndef _FILE_HPP
#define _FILE_HPP
#include<stdio.h>
#include <iostream>
#include <cstdlib>
#include <cstring>

void banner();
int file_open(FILE **file,  char *name, int mode);
void file_write(FILE **file);
void file_close(FILE **file);
#endif