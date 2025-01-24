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
    // cout <<"Error: " << *ptr3 << endl; // This will cause a runtime error

    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr4 = arr; // ptr4 points to the first element of the array, Constant pointer ,cannot be changed
    cout <<  *ptr4 << endl; // Accessing the first element of the array
    cout << *(ptr4 + 1) << endl; // Accessing the second element of the array
    cout << *(ptr4 + 2) << endl; // Accessing the third element of the array

    int* ptr5 = arr;
    int* ptr6 = ptr5 + 2; 
    cout << boolalpha;
    cout << ptr6- ptr5 << endl; // The difference between two pointers , subtraction possiblity
    cout << (ptr6 > ptr5) << endl; // Comparison between two pointers
    cout << (ptr6 == ptr5) << endl; // Comparison between two pointers
    return 0;
}