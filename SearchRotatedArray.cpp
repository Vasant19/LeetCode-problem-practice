// Problem no. 33 link: https://leetcode.com/problems/search-in-rotated-sorted-array/
// O(logN) solution
// Using binary search

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int left = 0, right = n - 1;
        while (left < right)
        {
            int mid = left + (right - left)/2;
        }
    }
};
   

int main ()
{
    Solution s;
    vector<int> nums = {4,5,6,7,0,1,2};
    vector<int> nums2 = {1};
    int target = 0,target2 = 3;
    cout << s.search(nums,target) << endl;
    cout << s.search(nums,target2) << endl;
    cout << s.search(nums2,target) << endl;
    return 0;
}