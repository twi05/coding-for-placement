#include <bits/stdc++.h>
using namespace std;
// vector<vector<int>> t(102, vector<int>(1002));
int t[102][1002];
int maxProfit(vector<int> weight, vector<int> value, int w, int n)
{

    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < w + 1; j++)
            if (i == 0 || j == 0)
                t[i][j] = 0;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < w + 1; j++)
        {
            if (weight[i - 1] <= j)
                t[i][j] = max(value[i - 1] + t[i - 1][j - weight[i - 1]], t[i - 1][j]);

            else
                t[i][j] = t[i - 1][j];

            for (int i = 0; i <= n; i++)
            {
                for (int j = 0; j <= w; j++)
                {
                    cout << t[i][j] << "  ";
                }
                cout << endl;
            }
            cout << endl;
            cout << endl;
        }
    }
    return t[n][w];
}
int main()
{
    vector<int> weight = {3, 1, 4};
    vector<int> value = {10, 2, 20};
    memset(t, -1, sizeof(t));
    int maxWt = 5;
    cout << maxProfit(weight, value, maxWt, weight.size()) << endl;
    //  for (int i = 0; i <4; i++)
    //         for (int j = 0; j < 4; j++)
    //             cout<<t[i][j];

    return 0;
}