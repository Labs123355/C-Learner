#include <cstdio> 


int main() 
{
    int  a  {1025}; // Create an int with value 1025 
    int* p {&a};    // Create a pointer to that int

    // Print size and info
    printf("size of integer is %zu  bytes\n", sizeof(int)); 
    printf("Address = %p, value = %d\n", p, *p) ;

    // Void pointer - Genric pointer to the same addy 
    void* p0 {p}; // point to any type of data

    // Print through the void pointer 
    /* & gets an address ("address of").
      '*' dereferences ("value at") i.e driving to those coordinates.
       * (int*) → "Treat whatever comes next as an int* (pointer to an integer)."
        */  
    printf("Address = %p, value = %d\n",p0, *(int*)p0) ; 

    return 0; 
}
