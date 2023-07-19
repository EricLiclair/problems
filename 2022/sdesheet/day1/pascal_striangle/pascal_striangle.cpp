// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]
// problem link [https://leetcode.com/problems/pascals-triangle/]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

class Solution
{
public:
    vector<vector<int>> generate(int n)
    {
        vi prev(n + 1);
        prev[1] = 1;
        vi dp(n + 1);

        vvi res;
        for (int row = 1; row <= n; row++)
        {
            vi _res;
            for (int i = 1; i <= row; i++)
            {
                _res.push_back(prev[i] + prev[i - 1]);
                dp[i] = prev[i] + prev[i - 1];
            }

            prev = dp;
            res.push_back(_res);
        }
        return res;
    }
};

int main()
{
    int n;
    cin >> n;
    vvi ans = Solution().generate(n);
    for (auto it : ans)
    {
        for (auto ch : it)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}