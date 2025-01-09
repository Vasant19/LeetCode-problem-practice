// Problem no 15 https://leetcode.com/problems/3sum/

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Sort array to handle duplicates and use two pointers
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int n = nums.size();
        
        // Iterate through possible first numbers
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicates for first number
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            // Use two pointers for remaining sum
            int left = i + 1;
            int right = n - 1;
            int target = -nums[i];  // We want nums[left] + nums[right] = -nums[i]
            
            while (left < right) {
                int current_sum = nums[left] + nums[right];
                
                if (current_sum == target) {
                    // Found a triplet
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicates for second number
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    // Skip duplicates for third number
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    
                    left++;
                    right--;
                }
                else if (current_sum < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
        
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = s.threeSum(nums);
    vector<int> nums2 = {0, 1, 1};
    vector<vector<int>> result2 = s.threeSum(nums2);
    vector<int> nums3 = {0, 0, 0};
    vector<vector<int>> result3 = s.threeSum(nums3);
    
    for (auto triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    for (auto triplet : result2) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    for (auto triplet : result3) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}