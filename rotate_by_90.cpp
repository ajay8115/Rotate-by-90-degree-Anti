// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    void rotateby90(vector<vector<int>> &a, int n)
    {
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            vector<int> x;
            for (int j = 0; j < n; j++)
            {
                x.push_back(a[j][i]);
            }
            v.push_back(x);
        }

        a = v;

        vector<vector<int>> u;
        for (int i = n - 1; i >= 0; i--)
        {
            vector<int> x;
            for (int j = 0; j < n; j++)
            {
                x.push_back(a[i][j]);
            }
            u.push_back(x);
        }

        a = u;
    }
};
