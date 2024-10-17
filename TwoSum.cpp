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

    int i = 0, j = nums.size() - 1;
    vector<int> ans;
    
    // Use two-pointer technique on the sorted array
    while (i < j)
    {
        int pairSum = numWithIndex[i].first + numWithIndex[j].first;
        if (pairSum == target)
        {
            ans.push_back(numWithIndex[i].second);
            ans.push_back(numWithIndex[j].second);
            return ans;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            j--;
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
