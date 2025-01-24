// Foundational code on Selection Sort algorithm
// Selection sort is an algorithm that selects the smallest element from an unsorted list in each iteration and places it at the beginning of the list.
// Time complexity: O(n^2)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




int main()
{
    int n = 5;
    int arr[]= {4,1,5,2,3};
    bubblesort(arr,n);
    cout << "Sorted array: \n";
    printarray(arr,n);
    return 0;
}