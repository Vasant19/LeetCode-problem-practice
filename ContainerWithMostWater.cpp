// Problem no 11 https://leetcode.com/problems/container-with-most-water/
// Meets Linear Runtime Complexity O(n) and Constant Space Complexity requirements

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxArea = 0;
        int left = 0;
        int right = n - 1;
        while (left < right)
        {
         
            int ht = min(height[left], height[right]);
            int wd = right - left;
            int area = ht * wd;
            maxArea = max(maxArea, area);
            height[left] < height[right] ? left++ : right--;
            // if (height[left] < height[right])
            // {
            //     left++;
            // }
            // else
            // {
            //     right--;
            // }

        }
        return maxArea;
    }
};





int main ()
{
    Solution s;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << s.maxArea(height) << endl;
    return 0;
}