// Problem no. 2798 link: https://leetcode.com/problems/number-of-employees-who-met-the-target/
// Time complexity: O(n)

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for (auto& num : hours)
        {
            if (num >= target)
            {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<int> myhours = {0,1,2,3,4};
    int target = 2;
    cout << s.numberOfEmployeesWhoMetTarget(myhours, target) << endl;
    vector<int> myhours2 = {5,1,4,2,2};
    int target2 = 6;
    cout << s.numberOfEmployeesWhoMetTarget(myhours2, target2) << endl;
    return 0;
}