// Problem no. 2520 ,Link: https://leetcode.com/problems/count-the-digits-that-divide-a-number/

#include <iostream>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int original = num; // Store the original number
        int count = 0; // Initialize count of digits that divide the number

        while (num > 0) {
            int digit = num % 10; // Extract the last digit
            if (digit != 0 && original % digit == 0) { // Check if the digit divides the number
                count++; // Increment count if the condition is met
            }
            num /= 10; // Remove the last digit
        }

        return count; // Return the final count
    }
};

int main() {
    Solution s;
    int mynum1 = 7;
    cout << "Test 1: " << s.countDigits(mynum1) << endl; // Expected output: 1

    int mynum2 = 121;
    cout << "Test 2: " << s.countDigits(mynum2) << endl; // Expected output: 2

    int mynum3 = 1248;
    cout << "Test 3: " << s.countDigits(mynum3) << endl; // Expected output: 4

    return 0;
}
