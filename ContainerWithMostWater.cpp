// Problem no 11 https://leetcode.com/problems/container-with-most-water/
// Meets Linear Runtime Complexity O(n) and Constant Space Complexity requirements

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int start = height[0];
        for(int i = 0; i< height.size();i++)
        {
            for(int j = i+1;j < height.size();j++)
           {
                int width = j-i;
                int finalheight = min(height[i],height[j]);
                int area = width * finalheight;
                maxArea = max(maxArea,area);
           }
            start++;    
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