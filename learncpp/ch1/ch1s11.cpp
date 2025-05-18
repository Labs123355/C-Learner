#include <iostream>

int main()
{
std::cout << "How many dragonballs?\n"; 

int numDragonBalls {};
std::cin >> numDragonBalls; 
std::cout << "Lets Dobule it!: "<<numDragonBalls * 2 
          << '\n'<< "Triple it!: " 
          << numDragonBalls * 3;

return 0; 

}