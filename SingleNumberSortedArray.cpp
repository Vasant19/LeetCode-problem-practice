// Problem no 540 link: https://leetcode.com/problems/single-element-in-a-sorted-array/
// O(logN) solution

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution 
{
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int n = nums.size();
        int start = 0, end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) /2;
            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
            {
                return mid;
            }
            else if(nums[mid] == nums[mid-1] && (mid % 2) == 0)
            {
                end = mid - 1;
            }
            else 
            {
                start = mid + 1;
            }
        }
    return -1;
    }
};

int main()
{
    Solution s;
    vector<int>nums = {1,1,2,3,3,4,4,8,8};
    vector<int>nums2 = {3,3,7,7,10,11,11};
    cout << s.singleNonDuplicate(nums) << "\n";
    cout << s.singleNonDuplicate(nums2) << "\n";
    return 0;
}