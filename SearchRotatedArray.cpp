// Problem no. 33 link: https://leetcode.com/problems/search-in-rotated-sorted-array/
// O(logN) solution
// Using binary search

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, n = nums.size(), right = n - 1;
        while (left <= right)
        {   
            int mid = (left + right) / 2;
            if (nums[mid] == target);
            {
                return mid;
            }
            if (nums[mid] > nums[mid + 1])
            {
                return nums[mid + 1];
            }

        }
        return -1;
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