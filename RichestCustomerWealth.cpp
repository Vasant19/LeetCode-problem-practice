// Problem no. 1672 link : https://leetcode.com/problems/richest-customer-wealth/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution 
{
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        vector<int> result;
        for (int i = 0; i < accounts.size(); i++) 
        {
            int sum = 0;
            // Loop through each element in the inner vector
            for (int j = 0; j < accounts[i].size(); j++) 
            {
                sum = sum + accounts[i][j];
            }
            result.push_back(sum);
        }
        int maxvalue = INT_MIN;  // Initialize with the smallest possible integer value
    
        for (int ans : result) {
            if (ans > maxvalue) {
                maxvalue = ans;
            }
        }
        return maxvalue;
    }
};



int main() {
    Solution S; 
    vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}};
    vector<vector<int>> accounts2 = {{1, 5}, {7, 3}, {3, 5}};
    vector<vector<int>> accounts3 = {{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};
    int result1 = S.maximumWealth(accounts);
    int result2 = S.maximumWealth(accounts2);
    int result3 = S.maximumWealth(accounts3);
    cout << "Result for accounts: " << result1 << endl;
    cout << "Result for accounts2: " << result2 << endl;
    cout << "Result for accounts3: " << result3 << endl;
    return 0;
}
