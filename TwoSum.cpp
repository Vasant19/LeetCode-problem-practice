// Problem no. 1 Link: https://leetcode.com/problems/two-sum/
// Optimal Two-pointer approach
// Time Complexity: O(nlog n), will try to improve it to O(n) 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    vector<pair<int, int>> numWithIndex;
    for (int i = 0; i < nums.size(); i++)
    {
        numWithIndex.push_back({nums[i], i});
    }

    sort(numWithIndex.begin(), numWithIndex.end());

    int left = 0, right = nums.size() - 1;
    vector<int> ans;
    
    // Use two-pointer technique on the sorted array
    while (left < right)
    {
        int pairSum = numWithIndex[left].first + numWithIndex[right].first;
        if (pairSum == target)
        {
            ans.push_back(numWithIndex[left].second);
            ans.push_back(numWithIndex[right].second);
            return ans;
        }
        else if (pairSum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return ans; 
}

int main()
{
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> ans = twoSum(nums, target);

    if (!ans.empty())
        cout << ans[0] << " " << ans[1] << endl;
    else
        cout << "No valid pair found" << endl;

    return 0;
}
