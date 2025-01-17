// Problem no. 852 link: https://leetcode.com/problems/peak-index-in-a-mountain-array/
// O(logN) solution


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans = 0;
        for (int i = 0;i<arr.size();i++)
        {
            if (arr[i] > arr[ans])
            {
                ans = i;
            }
        }
    return ans;
    }
};


int main ()
{
    Solution s;
    vector<int> arr = {0, 1, 0};
    vector<int> arr2 = {0, 2, 1, 0};
    vector<int> arr3 = {0, 10, 5, 2};
    cout << s.peakIndexInMountainArray(arr) << endl;
    cout << s.peakIndexInMountainArray(arr2) << endl;
    cout << s.peakIndexInMountainArray(arr3) << endl;
    return 0;
}