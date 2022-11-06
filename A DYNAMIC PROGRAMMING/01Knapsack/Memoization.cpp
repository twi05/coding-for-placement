#include <bits/stdc++.h>
using namespace std;
// vector<vector<int>> t(102, vector<int>(1002));
int t[102][1002];

int maxProfit(vector<int> weight, vector<int> value, int w, int n)
{
    if (n == 0 || w == 0)
        return 0;
    if (t[n][w] != -1)
        return t[n][w];

    if (weight[n - 1] <= w)
        return t[n][w] = max(value[n - 1] + maxProfit(weight, value, w - weight[n - 1], n - 1), maxProfit(weight, value, w, n - 1));

    else if (weight[n - 1] > w)
        return t[n][w]= maxProfit(weight, value, w, n - 1);
}
int main()
{
    vector<int> weight = {1, 3, 4, 5};
    vector<int> value = {1, 4, 5, 7};
    memset(t, -1, sizeof(t));
    int maxWt = 7;
    cout << maxProfit(weight, value, maxWt, weight.size());

    return 0;
}