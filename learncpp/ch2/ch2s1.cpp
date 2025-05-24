#include <iostream>

int getValuefromUser()
{
    std::cout << "Enter an interger "; 
    int input{};
    std::cin >>input; 

    return input;

}

int main()
{
    int x{getValuefromUser()};
    int y{getValuefromUser()}; 

    std::cout << x << " + " << y << " = " << x +y << '\n'; 

    return 0 ;

}