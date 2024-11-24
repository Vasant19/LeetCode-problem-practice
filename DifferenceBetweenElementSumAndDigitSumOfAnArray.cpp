// Problem no. 2535 link: https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution 
{
    public:
        int differenceOfSum(vector<int>& nums) 
        {
            int elementSum = 0;
            int digitSum = 0;
            int difference = 0;
            for (auto num : nums)
                {
                    elementSum = elementSum + num;
                    int temp = num;
                    while (temp > 0)
                    {
                        digitSum = digitSum + temp % 10;
                        temp /= 10;
                        difference = elementSum - digitSum;
                    }
                }
            return difference;
        }
};

int main ()
{
    Solution s;
    vector<int> mynums = {1,15,6,3};
    cout << s.differenceOfSum(mynums) << endl; // Expected output: 9
    vector<int> mynums2 = {1,2,3,4};
    cout << s.differenceOfSum(mynums2) << endl; // Expected output: 0
    vector<int> mynums3 = {1,16,6,32};
    cout << s.differenceOfSum(mynums3) << endl; // Expected output: 36
    return 0;
}