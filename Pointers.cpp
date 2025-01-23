// Fundamental code on pointers
// Compiled using MSVC
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <algorithm>
using namespace std;

int main()
{
    int x = 5;
    int* ptr = &x; // ptr is a pointer to an integer
    int** ptr2 = &ptr; // ptr2 is a pointer to a pointer to an integer
    cout << "The value of x is: " << x << endl;
    cout << "The address of x is: " << &x << endl;
    cout << "The value of x is: " << *ptr << endl; // Dereferencing the pointer
    cout << "The address of ptr is: " << &ptr << endl;
    cout << "The value of x is: " << **ptr2 << endl; // Dereferencing the pointer to a pointer
    cout << "The address of ptr2 is: " << &ptr2 << endl;

    int* ptr3 = NULL; // ptr3 is a null pointer
    cout << "The value of ptr3 is: " << ptr3 << endl;
    cout <<"Error: " << *ptr3 << endl; // This will cause a runtime error
    return 0;
}