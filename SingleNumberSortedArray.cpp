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
        // Outer edge cases when the array has only one element, otherwise heap-buffer-overflow on address
        if (n == 1)
        {
            return nums[0];
        }
        while (start <= end)
        {
            int mid = start + (end - start) /2;
            // Edge case If mid is the first element of the array 
            if(mid == 0 && nums[0] != nums[1])
            {
                return nums[mid];
            }
            // Edge case If mid is the last element of the array
            else if (mid == n - 1 && nums[n - 1] != nums[n - 2])
            {
                return nums[mid];
            }

            // Direct Answer if mid itself is the single element
            else if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
            {
                return nums[mid];
            }
            // when number of elements in either search space is even
            else if(mid % 2 == 0) 
            {
                if(nums[mid] == nums[mid-1])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }

            // when number of elements in either search space is odd
            else 
            {
                if(nums[mid] == nums[mid-1])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
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