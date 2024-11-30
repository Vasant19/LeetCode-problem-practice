// Problem no. 217 link: https://leetcode.com/problems/contains-duplicate/
// Time complexity: O(n)

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (ans.find(nums[i]) != ans.end()) {
                return true;
            }
            ans.insert(nums[i]);
        }
        return false;
       
    }
};



int main()
{
    Solution s;
    cout << boolalpha;
    vector<int>nums = {1,2,3,1};
    cout << s.containsDuplicate(nums) << endl;
    vector<int>nums2 = {1,2,3,4};
    cout << s.containsDuplicate(nums2) << endl;
    vector<int>nums3 = {1,1,1,3,3,4,3,2,4,2};
    cout << s.containsDuplicate(nums3) << endl;
    return 0;
}