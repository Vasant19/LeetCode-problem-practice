// Problem no. 704 link: https://leetcode.com/problems/binary-search/
// Optimization technique: Binary search
// Time complexity: O(log n)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;

        while (start <= end)
        {
            int mid = (start + end)/2;
            if (target == nums[mid])
            {
                return mid;
            }
            else if (target < nums[mid])
            {
                end = mid - 1;
            }
            else 
            {
                start = mid + 1;
            }
        }
        return -1;
    }
};

int main ()
{
    Solution s;
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    int target2 = 2;
    cout << s.search(nums, target) << endl;
    cout << s.search(nums, target2) << endl;
    return 0;

}