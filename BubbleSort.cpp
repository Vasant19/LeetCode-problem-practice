// Foundational concepts: for Sorting algorithms, Bubble sort.
// This is an implementation of the Bubble Sort algorithm in C++.
// Bubble sort is an algorithm that compares two adjacent elements and swaps them if they are in the wrong order.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubblesort(int arr[],int n)
{
    // TC = O(n^2)
    for (int i = 0;i<n-1;i++)
    {
        bool isSwap = false;
        for (int j = 0;j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            return;
        }
    }
}

void printarray(int arr[],int n)
{
    for (int i = 0;i<n-1;i++)
    {
        cout << arr[i] << "\n"
    }
    cout << endl;
}

int main()
{
    int n = 5;
    vector<int> arr = {4,1,5,2,3};
    return 0;
}