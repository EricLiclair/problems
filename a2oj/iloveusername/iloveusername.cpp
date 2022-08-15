// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

int amazingPerformances(vi &scores)
{
    int mini = scores[0];
    int maxi = scores[0];
    int amazingPerf = 0;

    for (int i = 1; i < scores.size(); i++)
    {
        if (scores[i] > maxi)
        {
            maxi = scores[i];
            amazingPerf++;
        }

        if (scores[i] < mini)
        {
            mini = scores[i];
            amazingPerf++;
        }
    }

    return amazingPerf;
}

int main()
{
    int n;
    cin >> n;
    vi scores(n);
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    cout << amazingPerformances(scores) << endl;
    return 0;
}