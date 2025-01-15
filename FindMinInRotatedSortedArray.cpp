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
        int left = 0, right = nums.size() - 1;
        
        // If the array is not rotated
        if (nums[right] >= nums[left]) return nums[0];
        
        while (left < right) {
            int mid = left + (right - left) / 2; // Prevent potential overflow
            
            if (nums[mid] > nums[right]) {
                // Minimum is in the right half
                left = mid + 1;
            } else {
                // Minimum is in the left half, including mid
                right = mid;
            }
        }
        
        return nums[left]; // left == right, pointing to the minimum
    }
};



int main ()
{
    Solution s;
    vector<int> nums = {3,4,5,1,2};
    vector<int> nums2 = {4,5,6,7,0,1,2};
    vector<int> nums3 = {11,13,15,17};
    vector<int> nums4 = {4,5,1,2,3};
    cout << s.findMin(nums) << endl;
    cout << s.findMin(nums2) << endl;
    cout << s.findMin(nums3) << endl;
    cout << s.findMin(nums4) << "\n";
    return 0;
}   