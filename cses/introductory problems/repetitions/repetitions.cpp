// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]
// problem link [https://cses.fi/problemset/task/1069]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

int maxReptition(string &s)
{
    int i = 0;
    int maxCount = 0;
    while (i < s.length())
    {
        int idx = i;
        while (idx < s.length() && s[i] == s[idx])
        {
            idx++;
        }

        maxCount = max(maxCount, idx - i);
        i = idx;
    }

    return maxCount;
}

int main()
{
    string s;
    cin >> s;
    cout << maxReptition(s);
}
