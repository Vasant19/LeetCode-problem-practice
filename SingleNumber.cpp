// Problem no. 136 https://leetcode.com/problems/single-number/
// Meets Linear Runtime Complexity O(n) and Constant Space Complexity requirements 
// XOR bitwise operator is used to solve this problem 
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
    vector<int> nums = {1, 2, 2, 1, 4,4,5};
    cout << "Single number is: " << SingleNumber(nums) << endl;
    return 0;
}
