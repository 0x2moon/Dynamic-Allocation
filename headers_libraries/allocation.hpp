#ifndef _ALLOCATION_HPP
#define _ALLOCATION_HPP
#include <iostream>
#include <cstdlib>

int allocation(int *&ptr, int tam);
int allocation(float *&ptr, int tam);
void desallocation(int *point);
void desallocation(float *point);
#endif
