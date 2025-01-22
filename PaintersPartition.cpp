// link: https://www.geeksforgeeks.org/painters-partition-problem/
// Variant of book allocation problem
// Binary search
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m,int maxallowedPainters) // O(n)
{ 
    int painters = 1;
    int time = 0;
    for(int i = 0 ;i<arr.size();i++)
    {
        if(time + arr[i] <= maxallowedPainters)
        {
            time += arr[i];
        }
        else // adding painters
        {
            painters++;
            time = arr[i];
        }
    }
    return painters <= m;
}


// N boards, M painters 
int ParititionsPainted(vector<int> &arr,int n,int m)
{
    if (m > n)
    {
        return -1;
    }
    int ans = -1;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int start = 0,end = sum;

    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if (isPossible(arr , n , m , mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}

int main()
{
    vector<int> arr = {40,30,10,20};
    int n = 4,m = 2;
    cout << ParititionsPainted(arr,n,m) << endl;
    return 0;
}