#include "vectors.hpp"

  void fill_out(int *vet, int tam, int n){
    for (int i = 0; i < tam; i++)
      {
        *(vet+i) = n;
      }
  }

  void fill_out(float *vet, int tam, int n){
    for (int i = 0; i < tam; i++)
      {
        *(vet+i) = (n / 2.00);
      }
  }
  void print_vector(int *vet, int tam){
   std::cout << "\nPrint a int vector:" << std::endl;
   for (int i = 0; i< tam; i++ )
    {
      std::cout << "vector["<< i <<"] = " << *(vet+i) << std::endl;
    }

  }
void print_vector(float *vet, int tam){
   std::cout << "\nPrint a float vector:" << std::endl;
   for (int i = 0; i< tam; i++ )
    {
      std::cout << "vector["<< i <<"] = " << *(vet+i) << std::endl;
    }

}


