// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]
// problem link [https://codeforces.com/problemset/problem/71/A]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

class Word
{
    string s;

public:
    Word(string _s)
    {
        this->s = _s;
    }

    string abbreviate()
    {
        if (this->s.length() <= 10)
        {
            return this->s;
        }
        else
        {
            char first = this->s[0];
            char last = this->s[s.length() - 1];
            string mid = to_string(this->s.length() - 2);

            return first + mid + last;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        Word word = Word(s);
        cout << word.abbreviate() << endl;
    }

    return 0;
}