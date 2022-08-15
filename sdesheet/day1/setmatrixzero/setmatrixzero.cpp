// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]
// problem link [https://leetcode.com/problems/set-matrix-zeroes/]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

class Solution
{

    void mz(int i, int j, vvi &matrix)
    {
        // make zeroes over row
        for (int dj = 0; dj < matrix[0].size(); dj++)
        {
            if (dj == j)
            {
                continue;
            }
            if (matrix[i][dj] == INT_MAX)
            {
                return;
            }

            if (matrix[i][dj] != 0)
            {
                matrix[i][dj] = 0;
            }
            else
            {
                matrix[i][dj] = INT_MAX;
                mz(i, dj, matrix);
                matrix[i][dj] = 0;
            }
        }

        // make zeroes over col
        for (int di = 0; di < matrix.size(); di++)
        {
            if (di == i)
            {
                continue;
            }
            if (matrix[di][j] == INT_MAX)
            {
                return;
            }

            if (matrix[di][j] != 0)
            {
                matrix[di][j] = 0;
            }
            else
            {
                matrix[di][j] = INT_MAX;
                mz(di, j, matrix);
                matrix[di][j] = 0;
            }
        }
    }

public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    mz(i, j, matrix);
                }
            }
        }
    }
};

int main()
{
    cout << "Hey champ!";
    return 0;
}