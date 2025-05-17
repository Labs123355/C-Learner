#include <iostream>

int main()
{
    int x = {5}; 
    std::cout <<"x is equal to: " << x<< std::endl ; 
    std::cout << "Hi! Its me" << std::endl << "Goku!\n"; 
    std::cout << "You are a fool "<< '\n' << "Kakarot\n"; // this is the way
    std::cout << "Hello MONKEYS!!!!\nFrieza\n" ; // or this 

    std::cout << "Get the Number: "; 
    int num{}; 
    std::cin >> num; // get the num from keyboard and store it in x 
    
    std::cout << "You entered " << num << '\n'; 
    return 0;
}