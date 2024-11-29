// Problem no . 3019 link: https://leetcode.com/problems/number-of-changing-keys/
// Time complexity: O(n)
#include <iostream>
#include <string>
#include <algorithm>  
using namespace std;

class Solution 
{
    public:
        int countKeyChanges(std::string s) 
        {
            if (s.length() < 1 || s.length() > 100)
            {
            return -1; // Error: String length out of range!
            }
            int keychanges = 0;
                for (int i = 1; i < s.length(); ++i) 
                {
                    if ((islower(s[i]) && isupper(s[i - 1])) || (isupper(s[i]) && islower(s[i - 1]))) 
                    {
                        keychanges++;
                    }
                }
            return keychanges;
        }
};

int main()
{
    Solution s;
    
    // Test case 1: String with mixed case characters
    string str = "aAbBcC";
    cout << s.countKeyChanges(str) << endl; //

    // Test case 2: Another string with mixed case characters
    string str2 = "AaAaAaaA";
    cout << s.countKeyChanges(str2) << endl;  // Expected output: 4

    // Test case 3: Empty string
    string str3 = "";
    cout << s.countKeyChanges(str3) << endl;  // Expected output: 0

    return 0;
}
