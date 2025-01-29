// Problem no. 75 link: https://leetcode.com/problems/sort-colors/
// Most optimal solution in One pass algorithm 
// Time complexity: O(n) ,Space complexity: O(1)
// Dutch Flag Algorithm

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution { 
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int mid = 0, low = 0, high = n - 1;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
         
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

