// Problem no. 88 link: https://leetcode.com/problems/merge-sorted-array/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = m+n-1,i = m-1, j = n-1;
        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
            {
                nums1[idx] = nums1[i];
                i--;
                idx--;
            }
            else
            {
                nums1[idx] = nums2[j];
                j--;
                idx--;
            }
        }
    }
};



int main ()
{
    Solution sol;

    vector<int>nums1 = {1,2,3,0,0,0}, nums2= {2,5,6};
    int m = 3, n = 3;
    sol.merge(nums1, m, nums2, n);
    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }
    cout << endl;

    vector<int> nums3 = {1}, nums4 = {};
    int m2 = 1, n2 = 0;
    sol.merge(nums3, m2, nums4, n2);
    for (int i = 0; i < nums3.size(); i++) {
        cout << nums3[i] << " ";
    }
    cout << endl;

    vector<int> nums5 = {0}, nums6 = {1};
    int m3 = 0, n3 = 1;
    sol.merge(nums5, m3, nums6, n3);
    for (int i = 0; i < nums5.size(); i++) {
        cout << nums5[i] << " ";
    }
    cout << endl;

    return 0;
}