// link https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
// Binary search solution 
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;


bool isValid(vector<int> &arr, int n, int m,int maxallowedpages) // O(n)
{ 
    // Number of students
    int stu = 1;
    // Number of pages
    int pages = 0;

    for (int i = 0;i<n;i++)
    {
        if (arr[i] > maxallowedpages)
        {
            return false;
        }
        if (pages + arr[i] <= maxallowedpages)
        {
            pages += arr[i];
        }
        else
        {
            stu++;
            pages = arr[i];
        }
    }

    return stu > m ? false : true;
}
int allocateBooks(vector<int> &arr, int n, int m) // O(logN * N)
{
    // Edge case invalid answer
    if (m > n)
    {
        return -1;
    }
    // Sum of pages
    int sum = 0;
    int ans = -1;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int start= 0, end = sum;
    
    while(start <=end) // O(logN)
    {
        int mid = start + (end - start) / 2;
        // left search space
        if(isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        // right search space
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {2,1,3,4};
    vector<int> arr2 = {15,17,30};   //32
    int n = 4, m = 2;

    cout << allocateBooks(arr, n, m) << endl; 
    cout << allocateBooks(arr2, n,m) << endl;
    return 0;
}