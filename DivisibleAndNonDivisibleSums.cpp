// Problem no. 2894 link: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
// Time complexity: O(n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0, num2 = 0;
        for (int i = 0;i <= n;i++)
        {
            if (i % m == 0)
            {
                num2 += i;
            }
            else
            {
                num1 += i;
            }
        }
        return num1 - num2;
    }
};

int main ()
{
    Solution s;
    int myn = 10,mym =3;
    cout << s.differenceOfSums(myn,mym) << endl; // Expected output: 19
    int myn2 = 5,mym2 =6;
    cout << s.differenceOfSums(myn2,mym2) << endl; // Expected output: 15
    int myn3 = 5,mym3 =1;
    cout << s.differenceOfSums(myn3,mym3) << endl; // Expected output: -15
}