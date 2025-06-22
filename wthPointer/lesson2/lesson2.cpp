#include <iostream> 
#include <cstdio>
int main()
{
    int a = 1025; 
    int* p;
    p = &a; 
    std::cout << "size of int is " << sizeof(int) << "\n"; 
    std::cout << "Address = " << p << " values = " << *p << "\n"; 
    char *p0 ;
    p0 = (char*)p; //typecasting 
    std::cout << "Size of Char is " << sizeof(char) << "\n"; 
    printf( "Address = %p,   value = %d\n" ,(void*) (p0) ,  (int) *(p0)   ); 
    printf( "Address = %p,   value = %d\n" ,(void*) (p0+1) ,(int) *(p0+1) ); 
 return 0; 
}


