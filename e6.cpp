#include <iostream> 
#include <cstring>
#include "headers_libraries/allocation.hpp"
#include "headers_libraries/vectors.hpp"
using namespace std;
int *vector, value;
void statement(){
   cout << "\t---Vectors---\t" << endl;
   cout <<"Exercises six are exposed in this file/progam using headres_libraries" << endl;
   cout << "\nInto a value:";
   cin  >> value;
}

int main(){
    statement();
    allocation(vector,value);
    fill_out(vector,value,8);
    print_vector(vector, value);
    desallocation(vector);
    return 0;
}