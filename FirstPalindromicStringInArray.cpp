// Problem no. 2108 link: https://www.geeksforgeeks.org/find-the-first-palindromic-string-in-s/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    string firstPalindrome(vector<string>& words) 
    {
        for (int i = 0; i < words.size(); i++)
        {
        // vector<string> ans = words; Orinally done like this
            string reversedWord = words[i];
        //  reverse(ans[i].begin(), ans[i].end()); Orinally done like this
            reverse(reversedWord.begin(), reversedWord.end()); // 
        //  if (ans[i] == words[i]) Orinally done like this
            if (reversedWord == words[i]) 
            {
                return words[i];
            }
        }
        return "";
    }
};
int main()
{
    Solution s;
    vector<string> mywords = {"abc","car","ada","racecar","cool"};
    cout << s.firstPalindrome(mywords) << endl; // should return "ada"
    vector<string> mywords2 = {"notapalindrome","racecar"};
    cout << s.firstPalindrome(mywords2) << endl; // should return "racecar"
    vector<string> mywords3 = {"def","ghi"}; 
    cout << s.firstPalindrome(mywords3) << endl; // should return ""
    vector<string> mywords4 = {"decemeber","Light","radar","level"};
    cout << s.firstPalindrome(mywords4) << endl; // should return "radar"
    return 0;
}