// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]
// problem link [https://cses.fi/problemset/task/1092]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

// recursion successful, subarrays
pair<bool, pair<vi, vi>> subsets(int idx, ll sumss1, vi ss1, vi ss2, int &n, int &target)
{
    if (idx > n)
    {
        if (sumss1 == target)
        {
            return make_pair(true, make_pair(ss1, ss2));
        }
        return make_pair(false, make_pair(ss1, ss2));
    }

    if (sumss1 > target)
    {
        return make_pair(false, make_pair(ss1, ss2));
    }

    if (sumss1 == target)
    {
        return make_pair(true, make_pair(ss1, ss2));
    }

    // add to ss1
    ss1.push_back(idx);
    pair<bool, pair<vi, vi>> addToS1 = subsets(idx + 1, sumss1 + idx, ss1, ss2, n, target);
    ss1.pop_back();

    ss2.push_back(idx);
    pair<bool, pair<vi, vi>> addToS2 = subsets(idx + 1, sumss1, ss1, ss2, n, target);
    ss2.pop_back();

    // add to ss2
    return make_pair(false, make_pair(ss1, ss2));
}

int main()
{
    int n;
    cin >> n;

    ll totalSum = n * (n + 1) / 2;
    if (totalSum % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    int target = totalSum / 2;
    vi ss1;
    vi ss2;

    pair<bool, pair<vi, vi>> ans = subsets(1, 0, ss1, ss2, n, target);

    cout << ans.second.first.size() << endl;
    for (auto it : ans.second.first)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << ans.second.second.size() << endl;
    for (auto it : ans.second.second)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}