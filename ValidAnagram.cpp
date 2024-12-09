// Problem no. 242 Valid Anagram link: https://leetcode.com/problems/valid-anagram/

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        if (s.size() != t.size()) 
            return false;

        unordered_map<char, int> charCount;

        for (char c : s)
            charCount[c]++;
        
        for (char c : t) 
        {
            if (charCount[c] == 0) 
                return false;
            charCount[c]--;
        }

        return true;
    }
};

int main()
{
    Solution solution;
    cout << boolalpha;

    string mystring = "anagram", myT = "nagaram";
    cout << solution.isAnagram(mystring, myT) << endl; // Expected: true

    string mystring2 = "rat", myT2 = "car";
    cout << solution.isAnagram(mystring2, myT2) << endl; // Expected: false
}
