// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]
// problem link [https://leetcode.com/problems/majority-element/]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

// this is a Boyre Moore's Algorithm

class Solution
{
public:
    // O(N) time complexity and O(1) space complexity
    /*This works on the principle that only one element can be present more than floor[n/2] elements in an array*/
    int majorityElement(vector<int> &nums)
    {

        int candidate = -1;
        int count = 0;

        for (const int &n : nums)
        {
            if (count == 0)
                candidate = n;
            count += candidate == n ? 1 : -1;
        }
        return candidate;
    }
};

int main()
{
    vi a = {1, 2, 3, 4, 2, 3, 2, 2, 2, 2};
    cout << Solution().majorityElement(a);
}