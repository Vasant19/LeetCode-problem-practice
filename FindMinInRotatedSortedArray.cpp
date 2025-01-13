// Problem no. 153 link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    int findMin(vector<int> &nums) 
    {
        int start = 0, n = nums.size(), end = n - 1;
        int mid = (start + end)/2;
        int target = INT_MAX;
        sort(nums.begin(),nums.end());
        for (auto val : nums)
        {
            if(val < target)
            {
                target = val;
                return target;
            }
        }
        while(start <= end)
        {
            if(mid == target)
            {
                return mid;
            }
            if(target < mid)
            {
                end = mid - 1;
            }
            if (target > mid)
            {
                start = mid + 1;
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