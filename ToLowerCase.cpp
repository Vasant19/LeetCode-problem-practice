// Problem no. 709 link: https://leetcode.com/problems/to-lower-case/
// Time complexity: O(n)

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        string result = "";
        if (s.length() < 1 || s.length() > 100)
        {
            return "Error: String length out of range!";
        }
        // transform(s.begin(), s.end(), s.begin(), tolower); Can be alternatively used
        for (auto& result : s) // Passby reference to change the original string.  
        // Alterantively Pass by value can be used: string copy = result;
        {
           result = tolower(result); 
        }
        return s;
    }
};


int main()
{
    Solution s;
    string str = "Hello";
    cout << s.toLowerCase(str) << endl;
    string str2 = "here";
    cout << s.toLowerCase(str2) << endl;
    string str3 = "LOVELY";
    cout << s.toLowerCase(str3) << endl;
    string str4 = "";
    cout << s.toLowerCase(str4) << endl;
    string str5 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=<>?/;:,.[]{}|`~123456cgcd";
    cout << s.toLowerCase(str5) << endl;
    return 0;
}