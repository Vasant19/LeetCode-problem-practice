// Problem Link: https://leetcode.com/problems/majority-element/
// 169. Majority Element
// Moores Voting Algorithm Linear Time Complexity O(n)
// Assumption majority element always exists in the array
#include  <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>& nums)
{
int n = nums.size();
int freq = 0, ans = 0;
for (int i = 0; i < n; i++)
 {
    if (freq == 0)
     {
         ans = nums[i];
     }
     if (nums[i] == ans)
     {
         freq++;
     }
     else
     {
         freq--;
     }
 }
    return ans;

}

int main ()
{
  vector<int> nums = {3,2,3};
  vector<int> nums2 = {2,2,1,1,1,2,2};
  vector <int> nums3 = {4,4,4,6,5,5,6,7,4,4};;
  int ans = majorityElement(nums);
  int ans2 = majorityElement(nums2);
  int ans3 = majorityElement(nums3);
  cout << "The Single element that has the highest occurence would be: "<< ans << endl;
  cout << "The Single element that has the highest occurence would be: "<< ans2 << endl;
  cout << "The Single element that has the highest occurence would be: "<< ans3 << endl;
}