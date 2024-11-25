// Problem no. 2652 link: https://leetcode.com/problems/sum-multiples/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Solution 
{
    public:
        int sumOfMultiples(int n) 
        {
            vector<int> multiples;
            int sum = 0;
            for(int i = 1; i <= n; i++) // Changed condition to include n
            {
                if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
                {
                    sum = sum + i;
                }
            }
            return sum;
        }
};


int main ()
{
    Solution s;
    int firstN = 7;
    cout << s.sumOfMultiples(firstN) << endl; // Expected output: 21   
    int secondN = 10;
    cout << s.sumOfMultiples(secondN) << endl; // Expected output: 40
    int thirdN = 9;
    cout << s.sumOfMultiples(thirdN) << endl; // Expected output: 30]
}