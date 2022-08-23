// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]
// problem link [https://cses.fi/problemset/task/1092]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

// recursion successful, subarrays

bool subset(ll idx, ll sum, vector<ll> _ss, vector<ll> _ss2, vector<ll> &ss, vector<ll> &ss2, ll target, vector<ll> &arr, vector<vector<ll>> &dp)
{
    if (idx > arr.size())
    {
        if (sum == target)
        {
            ss = _ss;
            ss2 = _ss2;
            return true;
        }
        return false;
    }

    if (sum > target)
        return false;

    if (dp[idx][sum] != -1)
    {
        return dp[idx][sum];
    }
    // no take
    _ss2.push_back(idx);
    bool noTake = subset(idx + 1, sum, _ss, _ss2, ss, ss2, target, arr, dp);
    _ss2.pop_back();

    bool take = false;
    if (!noTake)
    {
        // take
        _ss.push_back(idx);
        take = subset(idx + 1, sum + idx, _ss, _ss2, ss, ss2, target, arr, dp);
    }

    return dp[idx][sum] = take || noTake;
}

int main()
{
    ll p;
    cin >> p;
    ll totSum = p * (p + 1) / 2;
    if (totSum % 2 != 0)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES" << endl;
    ll target = totSum / 2;

    vector<ll> arr;
    for (ll i = 1; i <= p; i++)
    {
        arr.push_back(i);
    }

    // orginal s1 store
    vector<ll> s1;
    vector<ll> s2;

    // dummy store for recursion
    vector<ll> _s1;
    vector<ll> _s2;
    vector<vector<ll>> dp(p + 1, vector<ll>(target + 1, -1));
    subset(1, 0, _s1, _s2, s1, s2, target, arr, dp);
    cout << s1.size() << endl;
    for (const ll &ch : s1)
    {
        cout << ch << " ";
    }
    cout << endl;

    cout << s2.size() << endl;
    for (const ll &ch : s2)
    {
        cout << ch << " ";
    }

    return 0;
}