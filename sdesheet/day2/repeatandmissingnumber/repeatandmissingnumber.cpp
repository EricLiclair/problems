// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

int findRepeated(vi &arr)
{
    int ans = -1;

    for (const int &n : arr)
    {
        if (arr[abs(n)] < 0)
        {
            ans = abs(n);
            break;
        }
        else
        {
            arr[abs(n)] *= -1;
        }
    }

    for (const int &n : arr)
    {
        if (arr[abs(n)] < 0)
        {
            arr[abs(n)] *= -1;
        }
    }

    return ans;
}

pair<int, int> missingAndRepeating(vi &arr)
{
    int repeated = findRepeated(arr);

    int totSum = 0;
    for (const int &ch : arr)
        totSum += ch;

    int nsum = arr.size() * (arr.size() + 1) / 2;

    int missing = (nsum - totSum) + repeated;

    return make_pair(repeated, missing);
}

int main()
{
    cout << "Hey champ!";
    return 0;
}