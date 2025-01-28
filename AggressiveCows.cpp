// Problem link: https://www.geeksforgeeks.org/problems/aggressive-cows/0, https://www.spoj.com/problems/AGGRCOW/
// Binary search problem
// Time Complexity: O(nlogn)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int minimumAllowedDistance)
{
    int cows = 1, last = stalls[0];
    for (int i = 1; i < stalls.size(); i++)
    {
        if(stalls[i] - last >= minimumAllowedDistance)
        {
            cows++;
            last = stalls[i];
        }
        if(cows == k)
        {
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();

    int st = 1, end = stalls[n-1]-stalls[0], ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if(isPossible(stalls, k, mid))
        {
            st = mid + 1;
            ans = mid;
        }
        else 
        {
            end = mid - 1;
        }
    }

}
int main()
{
    vector<int> stalls = {1, 2, 4, 8, 9};
    vector<int> stalls2 = {10, 1, 2, 7, 5};
    int k = 3;
    cout << getDistance(stalls, k) << endl;
    return 0;
}