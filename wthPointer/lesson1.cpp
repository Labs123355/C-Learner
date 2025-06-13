#include <iostream> 


int main() 
{
    int a; 
    int *p; 
    p = &a; //  &a = address of a
    *p = 12; // derefrencing   
    std::cout << "Address of a called 'p': " << p 
	      <<"\nValue at address pointed by p '*p' :  " << *p 
	      << "\nReturn the address of a '&a' :" << &a
	      <<"\n";

    
    return 0;
};
