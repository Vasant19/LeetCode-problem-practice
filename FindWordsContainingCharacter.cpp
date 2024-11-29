// Problem no. 2942 link: https://leetcode.com/problems/find-words-containing-character/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans = {};
        for(int i = 0; i < words.size(); i++)
        {
            for (char c : words[i])
            {
                if (c == x)
                {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;

    // First case
    vector<string> mywords = {"leet", "code"};
    char myx = 'e';
    vector<int> result1 = s.findWordsContaining(mywords, myx);
    cout << "Words: ";
    for (const string& word : mywords) {
        cout << word << " ";
    }
    cout << "\nCharacter: " << myx << "\nResults: ";
    for (int index : result1) {
        cout << index << " ";
    }
    cout << endl;

    // Second case
    vector<string> mywords2 = {"abc", "bcd", "aaaa", "cbc"};
    char myx2 = 'a';
    vector<int> result2 = s.findWordsContaining(mywords2, myx2);
    cout << "Words: ";
    for (const string& word : mywords2) {
        cout << word << " ";
    }
    cout << "\nCharacter: " << myx2 << "\nResults: ";
    for (int index : result2) {
        cout << index << " ";
    }
    cout << endl;

    // Third case
    char myx3 = 'z';
    vector<int> result3 = s.findWordsContaining(mywords2, myx3);
    cout << "Words: ";
    for (const string& word : mywords2) {
        cout << word << " ";
    }
    cout << "\nCharacter: " << myx3 << "\nResults: ";
    for (int index : result3) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}