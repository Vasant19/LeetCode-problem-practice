// link https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
// Binary search solution (O(logN))

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int allocateBooks(vector<int> &arr, int n, int m)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int st= 0, end = sum;

}
int main()
{
    vector<int> arr = {2,1,3,4};
    int n = 4, m = 2;
    
    cout << allocateBooks(arr, n, m) << endl; 
    return 0;
}