#include "file.hpp"

void banner(){
    std::cout << "\n\t---type files---\t" << std::endl;
    std::cout << "\ttype ( r   )\t---> 1"   << std::endl;
    std::cout << "\ttype ( w   )\t---> 2"   << std::endl;
    std::cout << "\ttype ( a   )\t---> 3"   << std::endl;
    std::cout << "\ttype ( rb  )\t---> 4"   << std::endl;
    std::cout << "\ttype ( wb  )\t---> 5"   << std::endl;
    std::cout << "\ttype ( ab  )\t---> 6"   << std::endl;
    std::cout << "\ttype ( r+  )\t---> 7"   << std::endl;
    std::cout << "\ttype ( w+  )\t---> 8"   << std::endl;
    std::cout << "\ttype ( a+  )\t---> 9"   << std::endl;
    std::cout << "\ttype ( r+b )\t---> 10"  << std::endl;
    std::cout << "\ttype ( w+b )\t---> 11"  << std::endl;
    std::cout << "\ttype ( a+b )\t---> 12"  << std::endl;
    std::cout << "\nChoice a value: ";
      
}

int file_open(FILE **file,  char *name,  int mode){

if ((mode >= 1 ) && (mode <= 12))
    {
        switch (mode)
        {
        case 1:
            if (( *file = fopen(name, "r")) != NULL)
            {return 1;}
            break;
        case 2:
            if (( *file = fopen(name, "w")) != NULL)
            {return 1;}
            break;
        case 3:
            if (( *file = fopen(name, "a")) != NULL)
            {return 1;}
            break;
        case 4:
            if (( *file = fopen(name, "rb")) != NULL)
            {return 1;}
            break;
        case 5:
            if (( *file = fopen(name, "wb")) != NULL)
            {return 1;}
            break;
        case 6:
            if (( *file = fopen(name, "ab")) != NULL)
            {return 1;}
            break;
        case 7:
            if (( *file = fopen(name, "r+")) != NULL)
            {return 1;}
            break;
        case 8:
            if (( *file = fopen(name, "w+")) != NULL)
            {return 1;}
            break;
        case 9:
            if (( *file = fopen(name, "a+")) != NULL)
            {return 1;}
            break;
        case 10:
            if (( *file = fopen(name, "r+b")) != NULL)
            {return 1;}
            break;
        case 11:
            if (( *file = fopen(name, "w+b")) != NULL)
            {return 1;}
            break;
        case 12:
            if (( *file = fopen(name, "a+b")) != NULL)
            {return 1;}
            break;
        default: 
            std::cout << "invalid argument"  << std::endl;
            return 0;
            break;
        }
    }else
    { std::cout << "error, failed to open file"  << std::endl; return 0;}
}


void file_write(FILE **file){
    char c;
    std :: cout << "\ntype 0 to end:\nwrite ->>" << std:: endl;
    start: std :: cin >> c;
    if (c != '0')
     {
        fputc(c, *file);
        goto start;
     }else
       {std::  cout << "Saved file!" << std:: endl;}

}

void file_close(FILE **file){
    fclose(*file);
    std::  cout << "\nClosed file!" << std:: endl;
}

