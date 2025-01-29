// Problem no. 75 link: https://leetcode.com/problems/sort-colors/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2,0,2,1,1,0};
    vector<int> nums2 = {2,0,1};
    s.sortColors(nums);
    s.sortColors(nums2);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < nums2.size(); i++)
    {
        cout << nums2[i] << " ";
    }
    return 0;
}

