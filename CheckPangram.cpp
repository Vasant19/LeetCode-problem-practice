// Problem no. 1832 link: https://leetcode.com/problems/check-if-the-sentence-is-pangram/
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Solution 
{
public:
    bool checkIfPangram(string s) 
    {
        unordered_set<char> uniqueChars(s.begin(), s.end());
        return uniqueChars.size() == 26;
    }
};

int main() {
    Solution s;
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    cout << (s.checkIfPangram(sentence) ? "True" : "False") << endl;
    string sentence2 = "leetcode";
    cout << (s.checkIfPangram(sentence2) ? "True" : "False") << endl;
    string sentence3 = "Thefiveboxingwizardsjumpquickly";
    cout << (s.checkIfPangram(sentence3) ? "True" : "False") << endl;
    return 0;
}
