// Problem no . 1281 link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Solution 
{
    public:
        int subtractProductAndSum(int n) 
        {
            int sum = 0;
            int product = 1;
            vector<int> mysumtract = {};
            while (n > 0)
            {
                mysumtract.push_back(n % 10);
                n /= 10;
            }
            for (int i = 0;i < mysumtract.size();i++)
            {
                sum = sum + mysumtract[i]; 
                product = product * mysumtract[i];
            }
            int ans = product - sum;
            return ans;
        }
};

int main()
{
    Solution s;
    int n1 = 234,n2 = 4421;
    cout << s.subtractProductAndSum(n1) << endl;
    cout << s.subtractProductAndSum(n2) << endl;
    return 0;
}