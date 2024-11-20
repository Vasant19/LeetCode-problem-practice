// Problem no. 2974 link: https://leetcode.com/problems/minimum-number-game/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr; // Result array to store the sequence
        sort(nums.begin(), nums.end()); // Sort the array in ascending order

        while (!nums.empty()) {
            // Alice removes the smallest element
            int aliceRemove = nums.front();
            nums.erase(nums.begin()); // Remove the element

            // Bob removes the next smallest element
            int bobRemove = nums.front();
            nums.erase(nums.begin());

            // Bob appends to arr first
            arr.push_back(bobRemove);

            // Alice appends to arr next
            arr.push_back(aliceRemove);
        }

        return arr; // Return the final result
    }
};

int main() {
    Solution s;
    vector<int> nums = {5, 4, 2, 3}; 
    vector<int> nums2 = {2, 5};
    
    vector<int> print_result1 = s.numberGame(nums);
    vector<int> print_result2 = s.numberGame(nums2);
    
    for (int variable : print_result1) {
        cout << variable << " "; // Output the result for nums
    }
    cout << endl;
    
    for (int variable : print_result2) {
        cout << variable << " "; // Output the result for nums2
    }
    cout << endl;
}