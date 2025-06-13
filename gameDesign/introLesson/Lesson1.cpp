include <iostream>
#include <vector>

class Student
{
private: //  internal stuff (only the class itself can touch it)
    std::string m_first = "First";
    std::string m_last = "Last";
    int         m_id   = 0; 
    float       m_avg  = 0; 

/*Function header = What toppings you want

: initializer list = Building your pizza with those toppings right away

{} = You might add extra sauce or slice it when it comes out of the oven*/


public: // safe-to-use buttons and functions (other code outside the class can access)
    // constructor takes in everthing (parameters) 
    Student() {} // default constructor for if i ever construct? do nothing

    Student(std::string first, std::string last, int id, float avg )
    /* " : " means:
       Before we even step into the constructor body {}, 
       go ahead and initialize each member variable using these values.” 
    */
        : m_first (first), m_last (last), m_id (id) , m_avg (avg) // i.e m_first = first
    {
 
    }
    int getAvg() const 
    {
        return m_avg ;
    }
    int getID() const
    {
        return m_id ; 
    }
    std::string getFirst() const
    {
        return m_first ; 
    }
    std::string getLast() const 
    {
        return m_last ;
    }

    void print() const //I have a function called print that will never change the object
    {
        std::cout << m_first << " " << m_last << " "; 
        std::cout << m_id << " " << m_avg <<"\n";
    }
};


int main(int argc, char * argv[])
{
    school();

    return 0;
};
