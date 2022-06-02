#include <iostream> 
#include <cstring>
#include "headers_libraries/file.hpp"
using namespace std;
FILE *file; int value = 0; char name[] = {"arquivo1.txt"};

void statement(){
   cout << "\t---Files---\t" << endl;
   cout <<"Exercises four are exposed in this file/progam" << endl;
   cout << "\nInto a file name:";
   cin  >> name;
   banner();
   cin  >> value;  
}

int main (){    
    statement();
    if ((file_open(&file, name, value)) == 1)
        {
            file_write(&file);
            file_close(&file);
        }
        
    return 0;
}