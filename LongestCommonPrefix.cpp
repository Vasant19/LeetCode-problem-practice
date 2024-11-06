// Problem no 14 link:  https://leetcode.com/problems/longest-common-prefix/
// 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string LongestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    cout << "n is: " << n << endl;

    // Edge case: if the vector is empty, return an empty string
    if (n == 0) return "";

    // Initialize ans with the first string in the array
    string ans = strs[0];

    for (int i = 1; i < n; i++) {  // Start from the second string
        int j = 0;
        // Compare characters of ans and strs[i] until they differ
        while (j < ans.size() && j < strs[i].size() && ans[j] == strs[i][j]) {
            j++;
        }
        // Trim ans to the matched prefix length
        ans = ans.substr(0, j);
        // If there's no common prefix, return empty string
        if (ans == "") return "";
    }
    return ans;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    vector<string> strs2 = {"dog","racecar","car"};
    vector<string> strs3 = {"Lemon","Lemonade","Lemongrass"};

    string ans = LongestCommonPrefix(strs);
    string ans2 = LongestCommonPrefix(strs2);
    string ans3 = LongestCommonPrefix(strs3);

    cout << "The longest common prefix is: " << ans << endl;
    cout << "The longest common prefix is: " << ans2 << endl;
    cout << "The longest common prefix is: " << ans3 << endl;

    return 0;
}
