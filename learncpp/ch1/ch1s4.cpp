#include <iostream> 

int main()
{
    int width {7}; // define variable & init w/ 7 
    std::cout << width; // prints 7 

    int apple; // default init
    // Traditional 
    int oranges = 5 ; // copy init init value using equal 
    int c ( 6 ); // direct init value in parenthesis 

    // Modern init forms (we like those)
    int d { 7 }; //direct 
    int e { }; // we int an empty object

    double w1 {4.5};  // compiler error:  if int list-init does not allow narrowing converson --> 4.5 to 4  

    int w2 = 4.5; // compiles: copy init to val 4 drops the .5 
    int w3 ( 4.5 );  //complies: direct init to val  drops the .5 

    std::cout << w1;
    std::cout << w2;
    std::cout << w3;

    return 0; 
}

int initMultipleVar()

{
int a, b ; // create two var but not init them 
int c (7), d(8); //direct initi
int e {9}, f{10}; // direct list init 
int i{}, j{ }; // 

    return 0;
}

int main()
{
    [[maybe_unused]] double pi {3.14159}; // Shut up if pi isnt used 
    [[maybe_unused]] double gravity {9.8}; // Shut up if pi isnt used 
    [[maybe_unused]] double phi {1.61803}; // dont complain pls  

    std::cout << phi << "\n";
    std::cout << gravity << "\n";

    return 0;
}