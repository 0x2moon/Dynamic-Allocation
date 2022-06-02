#ifndef _STRUCT_HPP
#define _STRUCT_HPP
#include <iostream> 
#include <cstdlib>
#include <cstring>

typedef struct 
{
    int day, month, year;
}date;

typedef struct
{
    std::string name;
    std::string cpf;
    date date_nasc;
}people;

void fill_people  (people *p);
void print_people (people *p);



#endif