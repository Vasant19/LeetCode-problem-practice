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
        int ans = 0;
        set<int> result;
        int n = nums.size();
        result.insert(nums.begin(), nums.end());
        for(int i = 0;i<n;i++)
        {
            auto vals = result.find(nums[i]);
            

        }
    return ans;
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