// Problem no. 852 link: https://leetcode.com/problems/peak-index-in-a-mountain-array/
// O(logN) solution
// Binary search
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
      int n = arr.size();
      int left = 0, right = n - 1;
      while (left <= right)
      {
        int mid = left + (right - left) /2;
        if (arr[mid] >= (arr[mid + 1]) && arr[mid] >= (arr[mid - 1]))
        {
          return mid;
        }
        else if (arr[mid] <= arr[mid + 1])
        {
          left = mid + 1;
        }
        else
        {
          right = mid - 1;
        }
      }
      return -1;
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