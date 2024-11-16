// Problem no. 258 link: https://leetcode.com/problems/add-digits/
// Time Complexity: O(1)

#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int i = num % 9;

//  return (num && i == 0) ? 9 : i;  //Ternary operator,This is a one-liner version of the if-else statement below
if (num == 0) {
    return 0;
}

if (i == 0) {
    return 9;
}

return i;

    }
};

int main ()
{
    Solution s;
    int num = 38;
    cout << "Test 1: " << s.addDigits(num) << endl; // Expected output: 2
    int num2 = 0;
    cout << "Test 2: " << s.addDigits(num2) << endl; // Expected output: 0
    int num3 = 59;
    cout << "Test 3: " << s.addDigits(num3) << endl; // Expected output: 5
}