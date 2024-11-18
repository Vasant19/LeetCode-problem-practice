// Problem no 387 link:  https://leetcode.com/problems/first-unique-character-in-a-string/
// The problem is to find the first unique (non repeating) character in a string and return its index. 
// If there is no unique character, return -1.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class solution {
    public:
        int FirstUniqChar(string s)
        {
            for (char c : s)
            {   
                if (count(s.begin(), s.end(), c) == 1)
                {
                    return s.find(c);
                }
            };
            return -1;
        };
};
int main ()
{
    solution s;
    string tempstr = "Hello, World!";
    cout << s.FirstUniqChar(tempstr) << endl; // Expected output: 0
    string str1 = "leetcode";
    cout << s.FirstUniqChar(str1) << endl; // Expected output: 0
    string str2 = "loveleetcode";
    cout << s.FirstUniqChar(str2) << endl; // Expected output: 2
    string str3 = "aabb";
    cout << s.FirstUniqChar(str3) << endl; // Expected output: -1

}