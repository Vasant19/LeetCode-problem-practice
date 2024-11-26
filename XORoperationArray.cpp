// Problem no. 1486 Link: https://leetcode.com/problems/xor-operation-in-an-array/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution 
{
    public:
        int xorOperation(int n, int start) {
            int result = 0;
            for (int i = 0; i < n; i++) {
                result ^= start + 2 * i;
            }
            return result;
        }
};


int main ()
{
    Solution s;
    int n1 = 5, start1 = 0;
    cout << s.xorOperation(n1, start1) << endl; // Expected output: 8
    int n2 = 4, start2 = 3;
    cout << s.xorOperation(n2, start2) << endl; // Expected output: 8


}