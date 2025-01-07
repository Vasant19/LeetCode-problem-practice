// Problem no. 136 https://leetcode.com/problems/single-number/
// Meets Linear Runtime Complexity O(n) and Constant Space Complexity requirements 
// XOR bitwise operator is used to solve this problem 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int val : nums) {
            ans ^= val;
        }
        return ans;
    }
};

int main ()
{
    Solution s;
    vector<int> nums = {2,2,1};
    vector<int> nums2 = {4,1,2,1,2};
    vector<int> nums3 = {1};
    cout << s.singleNumber(nums) << "\n";
    cout << s.singleNumber(nums2) << "\n";
    cout << s.singleNumber(nums3) << "\n";
    return 0;
}   