// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]
// problem link [https://codeforces.com/problemset/problem/133/A]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

string trigger(string s)
{
    for (const char &ch : s)
    {
        if (ch == 'H' || ch == '9' || ch == 'Q')
        {
            return "YES";
        }
    }
    return "NO";
}

int main()
{
    string s;
    cin >> s;
    cout << trigger(s);
    return 0;
}