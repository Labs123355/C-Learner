#include <iostream>
#include <vector>

class Student
{
    std::string m_first = "First";
    std::string m_last = "Last";
    int         m_id   = 0; 
    float       m_avg  = 0; 


public:
    // constructor takes in everthing
    Student() {} // default constructor for if i ever construct?

    Student(std::string first, std::string last, int id, float avg )
        : m_first  (first)
        , m_last   (last)
        , m_id     (id)
        , m_avg    (avg)
    {
    }
    int getAvg()
    {
        return m_avg;
    }
    int getID()
    {
        return m_id; 
    }
    std::string getFirst()
    {
        return m_first; 
    }
    std::string getLast()
    {
        return m_last;
    }

    void print()
    {
        std::cout << m_first << " " << m_last << " "; 
        std::cout << m_id << " " << m_avg <<"\n";
    }
};

void nameCall()
{
    int age = 39; 
    std::string first = "Dave";
    std::string last = "Churchill";
    std::string name = first + " " + last;


    std::cout << "What's Good!\n" ; 

   
};

void vecTest()
{   // creates a vector of int named vec 
    std::vector<int> vec; 
    // Adds 42 to the vector
    vec.push_back(42); 
    // Adds 10 to the end of the vector 
    vec.push_back(10); 

    // for each item; if i is <condition>; do this  
    // for (size_t i=0; i<vec.size(); i++ ) // could use int but size_t is safer for vectors
    // {
    //     std::cout << vec[i] << "\n";
    // }

    /*for every item in vec:
    give me that item as 'a'
    then I’ll do something with 'a'
    */
    for (int a : vec)
    {
        std::cout << a << "\n";
    }
};
void school()
{
    Student s1; 
    Student s2("Dave", "Churchhill", 1, 3.14); 
    Student s3("Jane", "Doe", 2022000001, 99.9); 

    s3.print();

};


int main(int argc, char * argv[])
{
    school();

    return 0;
};
