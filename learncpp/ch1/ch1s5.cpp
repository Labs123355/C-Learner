#include <iostream>  // Needed for std::cin and std::cout

int main()
{
    std::cout << "Yo! Can you enter 3 values?\n";
    int num1 {}; 
    std::cin >> num1; 

    int num2 {}; 
    std::cin >> num2; 

    int num3 {}; 
    std::cin >> num3;

    std::cout << "You entered:\n"
              << num1 << '\n' 
              << num2 << '\n' 
              << num3 << '\n';

    return 0;
}
