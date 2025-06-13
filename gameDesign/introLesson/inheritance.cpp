#include <iostream>
// TODO: Understand pointers and refrences 
// Undersatnd how pointers work and refrences 
// we want to pass a & or * so we actually get the memory adrees
void pp(int & i)  
{    // give me the memory address where stored
    std::cout << &i << " " << i << " " << sizeof(i) << "\n"; 
}
template <typename T> 

class DynamicArray
{
    T * m_arr;
    size_t m_size;

public: 
    DynamicArray(size_t size)
        : m_size(size), m_arr (new T[size])
    {     
        std::cout << "Array Constructor\n";  
    }

    int get(size_t index) const 
    {
        return m_arr[index] ;
    }

    void set(size_t index, T val)
    {
        m_arr[index] = val;
    }
    void print() const
    {
        for (size_t i=0; i<m_size; i++)
        {
            std::cout << i << " " << m_arr[i] << "\n";
        }
    }

};

int main (int argc, char * argv[])
{

    DynamicArray<float> myArray(10); 

    myArray.set(4, 7.14); 
    myArray.set(2, 134.420); 

    myArray.print(); 

    return 0; 
};