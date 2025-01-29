// Problem no. 75 link: https://leetcode.com/problems/sort-colors/
// overall time complexity is O(n) for the solution
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution { 
public:
    void sortColors(vector<int>& nums) {
       int countofzeros = 0;
         int countofones = 0;
            int countoftwos = 0;

            // O(n) time complexity
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == 0) countofzeros++;
                else if (nums[i] == 1) countofones++;
                else countoftwos++;  
            }
            // O(n) time complexity
            int idx = 0;
            for (int i = 0; i < countofzeros; i++)
            {
                nums[idx++] = 0;
            }
            for (int i = 0; i < countofones; i++)
            {
                nums[idx++] = 1;
            }
            for (int i = 0; i < countoftwos; i++)
            {
                nums[idx++] = 2;
            }
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

