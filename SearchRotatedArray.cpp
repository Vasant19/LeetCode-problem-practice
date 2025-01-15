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
        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) //when mid element is the answer
            {
                return mid;
            }

            if (nums[mid] <= nums[right]) // right sorted
            {
                if(nums[mid] <= target && target <= nums[right])
                {
                    left = mid + 1;
                }
                else 
                {
                    right = mid -1;
                }
            } // left sorted
            else
            {
                if(nums[mid] >= target && target >= nums[left])
                {
                    right = mid - 1;
                }
                else 
                {
                    left = mid + 1;
                }
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
    cout << s.search(nums,target) << endl; // Expected output is 4
    cout << s.search(nums,target2) << endl; // Expected output is -1
    cout << s.search(nums2,target) << endl; // Expected output is -1
    return 0;
}