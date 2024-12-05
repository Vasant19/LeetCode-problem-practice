// Problem no . 2769 link: https://leetcode.com/problems/find-the-maximum-achievable-number

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + t * 2;
    }
};


int main ()
{
    Solution s;
    int mynum = 4,myT = 1;
    cout << s.theMaximumAchievableX(mynum,myT) << endl;
    int mynum2 = 3,myT2 = 2;
    cout << s.theMaximumAchievableX(mynum2, myT2) << endl;
    return 0;
}