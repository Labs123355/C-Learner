#include <iostream> 
int main() 
    {
      int a = 10; 
      int *p; 
      p = &a; 
      // Pointer artithmetric 
      std::cout << "Address p is in " << p<< "\n" ;
      std::cout << "Value at address p is " << *p<< "\n"; 
      std::cout << "Size of integer is " << sizeof(int)<< "\n"; 
      std::cout << "Addressp+1 is " << p+1 << "\n" ; 
      std::cout << "Value at address p+1 " << *(p+1)<<"\n" ; 

    }
