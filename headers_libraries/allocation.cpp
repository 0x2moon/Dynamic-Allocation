 #include "allocation.hpp"

 int allocation(int *&ptr, int tam)
  {
    //Allocation type c++
    if ((ptr = new int [tam]) != NULL)
       {  std::cout << "\nAllocation type: int" << std::endl;
          return 1;}
            else
              {return 0;}

    //Allocation type c
    /* if ((ptr = (int *)malloc(tam * sizeof(int ))) != NULL)
    { std::cout << "Alloc type: int " << std::endl;
    return 1;}
    else
    {return 0;}*/

  }

  int allocation(float *&ptr, int tam)
  {
    //Allocation type c++
    if ( (ptr = new float [tam]) != NULL)
       { std::cout << "\nAllocation type: float" << std::endl;
        return 1;}
          else
            {return 0;}
    
    //Allocation type c
    /*ptr = (float *)malloc(tam * sizeof(float));
    if ( ptr != NULL)
    { std::cout << "\nAllocation type: float\nPrint vector:" << std::endl;
    return 1;}
    else
    {return 0;}*/
    
  }

void desallocation(int *point){
     delete [] point;
     std::cout << "\nDesallocation type: int" << std::endl;
}
void desallocation(float *point){
     delete [] point;
     std::cout << "\nDesallocation type: float" << std::endl;
}