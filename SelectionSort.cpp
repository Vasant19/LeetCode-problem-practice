// Foundational code on Selection Sort algorithm
// Selection sort is an algorithm that selects the smallest element from an unsorted list in each iteration and places it at the beginning of the list.
// Time complexity: O(n^2)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Selectionsort(int arr[],int n)
{
    for (int i = 0;i<n-1;i++)
    {
        int smallestindex = i;
        for (int j = i+1;j<n;j++)
        {
            if (arr[j] < arr[smallestindex])
            {
                smallestindex = j;
            }
        }
        swap(arr[i],arr[smallestindex]);

    }
}

void printarray(int arr[],int n)
{
    for (int i = 0;i<n;i++)
    {
        cout << arr[i] << "\n";
    }
}

int main()
{
    int n = 5;
    int arr[]= {4,1,5,2,3};
    Selectionsort(arr,n);
    cout << "Sorted array: \n";
    printarray(arr,n);
    return 0;
}