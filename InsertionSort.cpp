// Foundational code on Insertion sort
// It works by repeatedly picking an element and inserting it into its correct position in the sorted portion of the array, muchlike cards are sorted in a card game.
// Time complexity: O(n^2)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void InsertionSort(int arr[],int n)
{
    for (int i = 1;i<n;i++)
    {
        int current = arr[i];
        int prev = i-1;
        while (arr[prev] < current && prev >= 0)
        {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = current;
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
    InsertionSort(arr,n);        
    cout << "Sorted array: \n";
    printarray(arr,n);
    return 0;
}