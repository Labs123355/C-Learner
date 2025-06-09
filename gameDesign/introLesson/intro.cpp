#include <iostream>
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

class Course 
{   // gonna have a course name 
    std::string m_name = "Course";
    // vector of students  
    std::vector<Student> m_students;
public: 
   Course () {} // default contructor 
   // class type then modifier 
   Course(const std::string& name ) // ref tp string lets us chg lets + const
   // before we step into what function does  initialize 
   : m_name(name)
   {
   }	   
   void addStudent(const Student& s)
   {
       m_students.push_back(s);
   }	   
   std::vector<Student> getStudents() const
   {
	return m_students;      	   
   }	   
   void print() const
   {
   	for (auto& s : m_students)
   	{
	    s.print();	
   	}	   
   }
};

void school()
{
    Student s1; 
    Student s2("Dave", "Churchhill", 1, 3.14); 
    const Student s3("Jane", "Doe", 2022000001, 99.9); 
    
    Course comp4300("Comp 4300"); // create a course 
    comp4300.addStudent(s1); 
    comp4300.addStudent(s2);
    comp4300.addStudent(s3);
    comp4300.addStudent(Student("Billy", "Bob", 3, 50.0));
    comp4300.print();    
};


int main(int argc, char * argv[])
{
    school();

    return 0;
};
