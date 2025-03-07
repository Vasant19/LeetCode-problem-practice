// Foundational concepts: for Sorting algorithms, Bubble sort.
// This is an implementation of the Optimezed Bubble Sort algorithm in C++.
// Bubble sort is an algorithm that compares two adjacent elements and swaps them if they are in the wrong order.
// Time complexity: O(n^2)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubblesort(int arr[],int n)
{
    // TC = O(n^2)
    for (int i = 0;i<n-1;i++)
    {
        bool isSwap = false; // Optimization boolean to check if the array is already sorted
        for (int j = 0;j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isSwap = true; // Optimization
            }
        }
        if (!isSwap) // Optimization
        {
            return;
        }
    }
}

void printarray(int arr[],int n)
{
    for (int i = 0;i<n;i++)
    {
        cout << arr[i] << "\n";
    }
    cout << endl;
}

int main()
{
    int n = 5;
    int arr[]= {4,1,5,2,3};
    bubblesort(arr,n);
    cout << "Sorted array: \n";
    printarray(arr,n);
    return 0;
}