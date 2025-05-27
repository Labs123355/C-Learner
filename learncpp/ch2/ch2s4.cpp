#include <iostream>

int doubleNumber(int x)
{  
    // return
    return x*2; 

}

int main()
{
    // input num 
    int input{};
    std::cout << "Input a number: ";
    std::cin >> input; 
    std::cout << "Double it: "<<doubleNumber(input);
    return 0;
}