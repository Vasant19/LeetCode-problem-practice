// Problem no. 121 https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Meets Linear Runtime Complexity O(n) and Constant Space Complexity requirements

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxprofit(vector<int>& prices)
{
    int maxProfit = 0,bestBuy = prices[0];
    for(int i = 1; i < prices.size(); i++)
    {
        if(prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;

}
int main()
{
  vector<int> prices = {7,1,5,3,6,4};
  vector<int> prices2 = {7,6,4,3,1};
    cout << "Maximum Profit: " << maxprofit(prices) << endl;
    cout << "Maximum Profit: " << maxprofit(prices2) << endl;
    return 0;
}