#include "struct.hpp"
#include <iostream>

void fill_people  (people *p){
   start: 
   std::cout << "Name:" << std::endl;
   std::getline(std::cin, p->name);
   if (p->name.length() < 100)
   {
      cpf: 
      std::cout << "CPF:" << std::endl;
      std::getline(std::cin, p->cpf);
      if(p->cpf.length() > 12)
      {
         std::cout << "cpf invalid, only 11 caracters." << std::endl;
         goto cpf;
      }
      std::cout << "Birth date (dd mm yyyy):" << std::endl;
      std::cin >> p->date_nasc.day >> p->date_nasc.month >> p->date_nasc.year;
   }
   else
   {
      std::cout << "Name invalid, only 100 caracters." << std::endl;
      goto start;
   } 
}

void print_people (people *p){
    std::cout << "\v\tName:\t" << p->name << std::endl;
  /*  int i = 0;
    while (*p->name == '/0')
    {
       std::cout <<p->name[i];
       i++;
    }*/
    
    std::cout << "\v\tCPF:\t " << p->cpf  << std::endl;
    std::cout << "\v\tBirth date:\t" << p->date_nasc.day <<"|"<< p->date_nasc.month <<"|"<< p->date_nasc.year << std::endl;
}