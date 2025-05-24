#include <iostream> 

void printA()
{
    std::cout << "A\n";
} // void does not need return 

int main() 
{
    std::cout << printA() << '\n'; // compile error because function is void--> doesnt have a return 
}