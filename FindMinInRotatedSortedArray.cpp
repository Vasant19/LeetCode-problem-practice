// Problem no. 153 link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// O(logN) solution
// Using binary search 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        // If there's only one element, return it
        if (nums.size() == 1) return nums[0];
        
        // Set two pointers: left at start and right at end
        int left = 0;
        int right = nums.size() - 1;
        
        // If array is already sorted (not rotated), return first element
        if (nums[right] > nums[left]) return nums[0];
        
        // Keep searching while left and right don't cross
        while (left <= right) {
            // Find middle point
            int mid = (left + right) / 2;
            
            // If middle element is greater than next element,
            // next element is the minimum
            if (nums[mid] > nums[mid + 1]) {
                return nums[mid + 1];
            }
            
            // If middle element is less than previous element,
            // middle element is the minimum
            else if (nums[mid] < nums[mid - 1] ) {
                return nums[mid];
            }
            
            // If middle element is greater than first element,
            // minimum is in right half
            else if (nums[mid] > nums[0]) {
                left = mid + 1;
            }
            // If middle element is less than first element,
            // minimum is in left half
            else {
                right = mid - 1;
            }
        }
        
        return -1;
    }
};


int main ()
{
    Solution s;
    vector<int> nums = {3,4,5,1,2};
    vector<int> nums2 = {4,5,6,7,0,1,2};
    vector<int> nums3 = {11,13,15,17};
    cout << s.findMin(nums) << endl;
    cout << s.findMin(nums2) << endl;
    cout << s.findMin(nums3) << endl;
    return 0;
}   