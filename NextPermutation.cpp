// Problem no. 31 link: https://leetcode.com/problems/next-permutation/
// Time complexity: O(n), Space complexity: O(1)
// Find the pivot (special element) which is the first element that is smaller than the element after it
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // find the pivot
        int pivot = -1, n = nums.size();
        for(int i = n-1;i>=0;i--)
        {
            if(i>0 && nums[i] > nums[i-1])
            {
                pivot = i-1;
                break;
            }
        }

        if (pivot == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        // find the element to swap with the pivot
        for(int i = n-1;i>=0;i--)
        {
            if(nums[i] > nums[pivot])
            {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        // reverse the array from pivot+1 to n-1
        int i = pivot+1, j = n-1;
        while (i <= j)
        {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        
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