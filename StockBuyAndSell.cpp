// Problem no. 121 https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Meets Linear Runtime Complexity O(n) and Constant Space Complexity requirements
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int bestbuy = prices[0];
        for(int i = 1;i<prices.size();i++)
        {
            if (prices[i] > bestbuy)
            {
                ans = max(ans,prices[i]-bestbuy);
            }
            bestbuy = min(bestbuy,prices[i]);
        }
        return ans;
    }
};


int main ()
{
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    cout << s.maxProfit(prices) << endl;  // Expected 5
    vector<int> prices2 = {7,6,4,3,1};
    cout << s.maxProfit(prices2) << endl; // Expected 0
    return 0;

}