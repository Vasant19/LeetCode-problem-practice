// Problem no. 977 link: https://leetcode.com/problems/squares-of-a-sorted-array
// O(N) time complexity
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution 
{
    public:
        vector<int> sortedSquares(vector<int>& nums) 
        {
            int n = nums.size();
            vector<int> ans(n);
            int left = 0, right = n - 1;
            
            // Fill the result array from the end
            for (int i = n - 1; i >= 0; i--) {
                int leftSq = nums[left] * nums[left];
                int rightSq = nums[right] * nums[right];
                
                // Place the larger squared value at the end of the result
                if (leftSq > rightSq) {
                    ans[i] = leftSq;
                    left++;
                } else {
                    ans[i] = rightSq;
                    right--;
                }
            }
            
            return ans;
        }
};

// Also O(n log n) time complexity solution is possible

// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         vector<int> ans;
//         for (int num : nums) {
//             ans.push_back(num * num);
//         }
//         sort(ans.begin(), ans.end());
//         return ans;
//     }
// };

;
int main ()
{
    Solution s;
    vector<int> mynums = {-4,-1,0,3,10};
    for (auto & myresults : s.sortedSquares(mynums))
    {
        cout << myresults << " " ;
    }
    cout << endl;
    vector<int> mynums2 = {-7,-3,2,3,11};
    for (auto & myresults2 : s.sortedSquares(mynums2))
    {
        cout << myresults2 << " ";
    }
}
