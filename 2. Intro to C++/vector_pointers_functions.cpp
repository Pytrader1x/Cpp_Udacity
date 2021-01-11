#include <iostream>
#include <vector>

using std::cout;


using std::vector;

int* AddOne(int& j) 
{
    // Increment the referenced int and return the
    // address of j.
    j++;
    cout << "The value of j is: " << j << " and it's memory address is: " << &j <<"\n";
    return &j;
}

int main() 
{
    int i = 1;
    cout << "The value of i is: " << i << " and it's memory address is: "<< &i <<"\n";
    
    // Declare a pointer and initialize to the value
    // returned by AddOne:
    int* my_pointer = AddOne(i);
    cout << "The value of i is now: " << i << " and it's memory address is: "<< &i << "\n";
    cout << "The value of the int pointed to by my_pointer is: " << *my_pointer << " and it's memory address is: "<< my_pointer << "\n";







    // Vector v is declared and initialized to {1, 2, 3}
    vector<int> v {1, 2, 3};
    
    vector<int> vb {2, 5, 7};
    
    // Declare and initialize a pointer to the address of v here:
    vector<int> *pointer_to_v = &v;
    
    vector<int> *pointer_to_vb = &vb;

    // The following loops over each int a in the vector v and prints.
    // Note that this uses a "range-based" for loop:
    // https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Res-for-range
    
    cout << "iterating the vector V: \n";
    for (int a: v) {
        cout << a << "\n";
    }
    
    
    
    // Dereference your pointer to v and print the int at index 0 here (note: you should print 1):
    cout << "The pointer to vector v at index 0 is " << (*pointer_to_v)[0] << "\n";
    
    
    cout << "iterating the vector vb \n";
    for (int ab: vb){
        cout << ab << "\n";
    }
    
    cout << "The pointer to vector v at index 0 is " << (*pointer_to_vb)[0] << "\n";

}