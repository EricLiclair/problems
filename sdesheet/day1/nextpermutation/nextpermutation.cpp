// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]
// problem link [https://leetcode.com/problems/next-permutation/]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

class Solution
{

private:
    void reverse(int s, int e, vi &nums)
    {
        while (s < e)
        {
            swap(nums[s++], nums[e--]);
        }
    }

    void permutate(int s, vi &nums)
    {
        reverse(s + 1, nums.size() - 1, nums);

        int idx = s + 1;
        while (nums[idx] <= nums[s])
        {
            idx++;
        }

        swap(nums[idx], nums[s]);
    }

public:
    void nextPermutation(vector<int> &nums)
    {
        // find the inflection -> nums[i] > nums[i-1]
        for (int i = nums.size() - 1; i > 0; i--)
        {
            if (nums[i] > nums[i - 1])
            {
                permutate(i - 1, nums);
                return;
            }
        }

        // reverse the complete array
        reverse(0, nums.size() - 1, nums);
    }
};

int main()
{
    int n;
    cin >> n;
    vi nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution().nextPermutation(nums);
    for (auto it : nums)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}