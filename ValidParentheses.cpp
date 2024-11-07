// Problem no. 20 link: https://leetcode.com/problems/valid-parentheses/
// Time Complexity: O(n)

#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];  // Access each character
            
            // Push opening brackets onto the stack
            if (c == '(' || c == '[' || c == '{') {
                stk.push(c);
            }
            // Check for matching closing brackets
            else {
                if (stk.empty()) return false; // No matching opening bracket
                
                char top = stk.top();
                stk.pop();
                
                // Ensure brackets match
                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) {
                    return false;
                }
            }
        }
        
        // If stack is empty, all brackets matched
        return stk.empty();
    }
};

int main() {
    Solution s;

    cout << boolalpha;
    cout << "Test 1: " << s.isValid("()") << endl;        // Expected output: true
    cout << "Test 2: " << s.isValid("()[]{}") << endl;    // Expected output: true
    cout << "Test 3: " << s.isValid("(]") << endl;        // Expected output: false
    cout << "Test 4: " << s.isValid("([])") << endl;      // Expected output: true

    return 0;
}
