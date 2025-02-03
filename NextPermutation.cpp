// Problem no. 31 link: https://leetcode.com/problems/next-permutation/
// Time complexity: O(n), Space complexity: O(1)
// Find the pivot (special element) which is the first element that is smaller than the element after it
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<int> nums2 = {3, 2, 1};
    vector<int> nums3 = {1, 1, 5};
    sol.nextPermutation(nums);
    sol.nextPermutation(nums2);
    sol.nextPermutation(nums3);
    return 0;
}