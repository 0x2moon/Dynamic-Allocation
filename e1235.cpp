#include <iostream> 
#include "headers_libraries/allocation.hpp"
#include "headers_libraries/vectors.hpp"
using namespace std;

void statement(){
   cout << "\t---Dynamic Allocation---\t" << endl;
   cout <<"Exercises one, two and three are exposed in this file/progam" << endl;
}

int main (){    
    statement();
    int *point_Int, tam = 5; float *point_Float;  

    if (allocation(point_Int, tam) == 1)
        {fill_out(point_Int,tam,50);
         print_vector(point_Int, tam);
         desallocation(point_Int);}
            else{ exit(1);}

     if (allocation(point_Float, tam) == 1)
        {fill_out(point_Float,tam,25);
         print_vector(point_Float,tam);
         desallocation(point_Float);}
            else{ exit(1);}
    return 0;
}