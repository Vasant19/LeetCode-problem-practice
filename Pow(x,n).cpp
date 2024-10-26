// Problem: 50. Pow(x, n) Link: https://leetcode.com/problems/powx-n/
// Meets Linear Runtime Complexity O(log n) and Constant Space Complexity requirements
// Binary Exponentiation is used to solve this problem

#include <iostream>
using namespace std;

double myPow(double x, int n) 
{
    if (n == 0) return 1.0;
    if (x == 0) return 0.0;
    if (x == 1) return x;
    if (x == -1 && n % 2 == 0) return 1.0;
    if (x == -1 && n % 2 == 1) return -1.0;
    long binForm = n;
    if(n < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }

    double ans = 1.0;

    while(binForm > 0)
    {
        if (binForm % 2 == 1)  
        {
            ans *= x;
        }
        x *= x;  
        binForm /= 2;  
    }

    return ans;
}

int main()
{
    double x;
    int n;
    
    cout << "Please enter the value of x: " << endl;
    cin >> x;
    cout << "Please enter the value of n: " << endl;
    cin >> n;
    
    cout << "Result: " << myPow(x, n) << endl;
}
