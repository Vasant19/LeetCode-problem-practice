// Problem no. 238 link: https://leetcode.com/problems/product-of-array-except-self/
// Optimal solution time complexity: O(n) using prefix and suffix arrays.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n , 1);

        for(int i = 1;i<n;i++)
        {
            ans[i] = ans[i-1]*nums[i-1];
        }

        int suffix = 1;
        for(int i = n-2;i>=0;i--)
        {
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }
        
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> nums2 = {-1,1,0,-3,3};

    vector<int> result = s.productExceptSelf(nums);
    for (auto val : result) {
        cout << val << "\n";
    }
    cout << endl;
    
    vector<int> result2 = s.productExceptSelf(nums2);
    for (auto val : result2) {
        cout << val << "\n";
    }

    return 0;
}