// Problem no. 53 ,Link: https://leetcode.com/problems/maximum-subarray/
// Implementation: Kadane's Algorithm
// Time Complexity: O(n)
#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) 
{
    int maxSum = INT_MIN;
    int currentsum = 0;

    for(int val : nums)
    {
        currentsum += val;
        maxSum = max(currentsum, maxSum);
        if(currentsum < 0)
        {
            currentsum = 0;
        }
    }

    return maxSum;
}

int main() 
{
 vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
 int maxSum = maxSubArray(nums);
 cout << "Maximum Subarray Sum: " << maxSum << endl;
}