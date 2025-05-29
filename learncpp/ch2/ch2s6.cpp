#include <iostream>

int doMath(int first, int second, int third, int fourth);


int Q4()
{


    return 0; 
}

int doMath(int first, int second, int third, int fourth)
{
     return first + second * third / fourth;
}




/*
Term            | Technical Meaning                                           | Examples
----------------|-------------------------------------------------------------|--------------------------------------------------------
Declaration     | Tells the compiler about an identifier and its type.       | void foo();        // Function declaration (no body)
                |                                                             | int x;             // Variable declaration (and definition)
Definition      | Provides the actual implementation or instantiation.       | void goo() {}      // Function definition (has body)
                |                                                             | int x;             // Variable definition
                |                                                             | (All definitions are also declarations)
Pure Declaration| A declaration that is not a definition.                    | void foo();        // Forward declaration of a function
Initialization  | Assigns an initial value to a defined object.              | int x { 2 };       // Initializes x to 2
*/
