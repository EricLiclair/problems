// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]
// problem link [https://cses.fi/problemset/task/1754]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

string canPilesEmpty(int a, int b)
{
    int x = 2 * a - b;
    int y = 2 * b - a;

    if (x < 0 || y < 0)
        return "NO";

    return (!(x % 3) && !(y % 3)) ? "YES" : "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        cout << canPilesEmpty(a, b) << endl;
    }
    return 0;
}