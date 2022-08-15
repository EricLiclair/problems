#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << -1 << endl;
        return 0;
    }

    vector<int> seq;
    for (int i = 0; i < n; i++)
    {
        seq.push_back(i + 1);
    }

    for (int i = 0; i < n; i += 2)
    {
        swap(seq[i], seq[i + 1]);
    }

    for (auto it : seq)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
