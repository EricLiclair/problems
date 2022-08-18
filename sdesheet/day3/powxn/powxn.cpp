// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]
// problem link [https://leetcode.com/problems/powx-n/]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == 0)
            return 1;
        if (n == 1)
            return x;

        if (n & 1)
        {
            // odd
            // pow(x, n) = pow(x, n-1)*x
            return pow(x, n - 1) * x;
        }
        else
        {
            // even
            return pow(pow(x, n / 2), 2);
        }
    }
};

int main()
{
    cout << "Hey champ!";
    return 0;
}