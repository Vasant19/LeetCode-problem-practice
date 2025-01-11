// Problem no. 238 link: https://leetcode.com/problems/product-of-array-except-self/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            int product = 1;
            for(int j = 0; j < n; j++) {
                if(i != j) {
                    product *= nums[j];
                }
            }
            ans.push_back(product);
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