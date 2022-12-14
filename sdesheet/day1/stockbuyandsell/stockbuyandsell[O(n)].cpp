// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]
// problem link [https://leetcode.com/problems/best-time-to-buy-and-sell-stock/]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

class Solution
{

public:
    int maxProfit(vector<int> &prices)
    {
        int minPrice = INT_MAX;
        int profit = INT_MIN;

        for (int &p : prices)
        {
            minPrice = min(minPrice, p);
            profit = max(profit, p - minPrice);
        }

        return profit;
    }
};

int main()
{
    int n;
    cin >> n;
    vi prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    cout << Solution().maxProfit(prices) << endl;
    return 0;
}