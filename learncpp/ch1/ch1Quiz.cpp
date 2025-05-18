#include <iostream>
// Put my own spin on it 

int main()
{
    std::cout<< "Welcome to the grocery calc!\nPlease put in the the first item you grabbed\n";
    char firstItem[20]; // can stor words this way 
    int firstItemQty{};

    std::cout << "What did you grab?\n";
    std::cin >> firstItem; 
    std::cout << "How many did you grab?\n";
    std::cin >> firstItemQty; 
    std::cout << "On to the next\n"; 

    char secondItem[20]; // can store words this way
    int secondItemQty{};
    std::cout << "What did you grab?\n";
    std::cin >> secondItem; 
    std::cout << "How many did you grab?\n";
    std::cin >> secondItemQty; 

    std::cout << firstItemQty << " " << firstItem 
              << " and " << secondItemQty<< " "<< secondItem << '\n'
              << "Total of: " << firstItemQty + secondItemQty<< " items.\n"
              << "Delta of: " << firstItemQty - secondItemQty<< " items.\n"; 
    return 0;
}
