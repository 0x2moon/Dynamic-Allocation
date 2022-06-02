#include <iostream> 
#include <cstring>
#include "headers_libraries/struct.hpp"
using namespace std;

void statement(){
   cout << "\t---Struct---\t" << endl;
   cout <<"Exercises seven are exposed in this file/progam using headres_libraries" << endl;
}

int main(){
    statement();
    people TAD;
    fill_people (&TAD);
    print_people(&TAD);
    return 0;
}