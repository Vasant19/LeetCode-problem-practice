// Problem no. 3024 link: https://leetcode.com/problems/type-of-triangle/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution 
{
    public:
        string triangleType(vector<int>& nums) 
        {
            string ans = "";
            if (nums.size() != 3) 
            {
                return "Error: Please enter 3 values, Cannot form a triangle with less than 3 sides";
            }
            
            for (int i = 0; i < 3; i++)
            {
                if (nums[i] <= 0 || nums[i] > 100)
                {
                    return "Invalid size of input make sure its between 1-100";
                }
                if (nums[0] + nums[1] <= nums[2] || nums[0] + nums[2] <= nums[1] || nums[1] + nums[2] <= nums[0])
                {
                    return "none";
                }
                if (nums[0] == nums[1] && nums[1] == nums[2])
                {
                    return "equilateral";
                }
                if (nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2])
                {
                    return "isosceles";
                }
                if (nums[0] != nums[1] && nums[1] != nums[2] && nums[0] != nums[2])
                {
                    return "scalene";
                }
            }
            return ans;
        }
};

int main()
{
    Solution s;
    vector<int> nums1 = {3, 3, 3};
    cout << s.triangleType(nums1) << endl; // Expected output: Equilateral triangle
    vector <int> nums2 = {3, 3, 4};
    cout << s.triangleType(nums2) << endl; // Expected output: Isosceles triangle
    vector<int> nums3 = {3, 4, 5};
    cout << s.triangleType(nums3) << endl; // Expected output: scalene triangle
    vector<int> nums4 = {};
    cout << s.triangleType(nums4) << endl; // Expected output: "Cannot form a triangle with less than 3 sides"
    vector<int> nums5 = {0, 3, 101};
    cout << s.triangleType(nums5) << endl; // Expected output: Invalid size of input make sure its between 1-100
    vector<int> failingcase = {8, 4, 2};
    cout << s.triangleType(failingcase) << endl; // Expected output: none
}