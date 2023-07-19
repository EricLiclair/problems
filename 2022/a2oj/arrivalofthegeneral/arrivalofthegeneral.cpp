#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

class Heights
{
    vector<int> heights;

public:
    Heights(vector<int> heights)
    {
        this->heights = heights;
    }

    int minLineUpSwaps()
    {
        int leftmostMaxIdx = this->heights.size();
        int maxHeight = INT_MIN;
        int rightmostMinIdx = -1;
        int minHeight = INT_MAX;

        for (int i = 0; i < this->heights.size(); i++)
        {
            if (this->heights[i] > maxHeight)
            {
                leftmostMaxIdx = i;
                maxHeight = this->heights[i];
            }

            if (this->heights[i] <= minHeight)
            {
                rightmostMinIdx = i;
                minHeight = this->heights[i];
            }
        }

        int delta = 0;
        if (rightmostMinIdx < leftmostMaxIdx)
        {
            delta = -1;
        }
        return leftmostMaxIdx + (this->heights.size() - 1 - rightmostMinIdx) + delta;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> heights(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    Heights h = Heights(heights);
    cout << h.minLineUpSwaps() << endl;
    return 0;
}
