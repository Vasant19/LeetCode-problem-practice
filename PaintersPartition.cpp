// link: https://www.geeksforgeeks.org/painters-partition-problem/
// Variant of book allocation problem
// Binary search
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

// N boards, M painters 
int ParititionsPainted(vector<int> &arr,int n,int m)
{
    if (m > n)
    {
        return -1;
    }
    int ans = -1;

}

int main()
{
    vector<int> arr = {40,30,10,20};
    int n = 4,m = 2;
    cout << ParititionsPainted(arr,n,m) << endl;
    return 0;
}