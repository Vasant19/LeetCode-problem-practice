// Problem no. 136 https://leetcode.com/problems/single-number/

#include <iostream>
#include <vector>
using namespace std;

int SingleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int val : nums)
    {
        ans ^= val;
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 2, 1, 4};
    cout << "Single number is: " << SingleNumber(nums) << endl;
    return 0;
}
