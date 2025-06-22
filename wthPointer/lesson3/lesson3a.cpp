#include <cstdio>
/* Pointer to Pointer */
int main() 
{   
    int x {5}; 
    int* p {&x}; 
     *p = 6; // derefrencing use '=' 
    int** q {&p}; 
    int*** r {&q};
    
    printf("%d\n", *p);    
    printf("%p\n", q);    
    printf("%d\n", **q);    
    printf("%d\n", *p);    
    printf("%d\n", *p);    
        
    

    return 0;
} 
