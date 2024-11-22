// Problem no. 2114 link: https://leetcode.com/problems/maximum-number-of-words-you-can-type/
// Time complexity: O(n) 
#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
using namespace std;

class Solution {
public:
   int mostWordsFound(vector<string>& sentences) 
   {
        int maxWords = 0;
        for (const string& sentence : sentences) 
            {
                // Count the number of words in the current sentence
                // by counting the number of spaces and adding 1 as the number of words is always 1 more than the number of spaces
                int wordCount = count(sentence.begin(), sentence.end(), ' ') + 1;
                // Update the maximum word count
                maxWords = max(maxWords, wordCount);
            }
        return maxWords;
    }
};

int main ()
{
    Solution s;
    vector<string> mysentence = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    cout << "Test 1: " << s.mostWordsFound(mysentence) << endl; // Expected output: 6
    vector<string> mysentence2 = {"please wait", "continue to fight", "continue to win"};
    cout << "Test 2: " << s.mostWordsFound(mysentence2) << endl; // Expected output: 3
    return 0;
}