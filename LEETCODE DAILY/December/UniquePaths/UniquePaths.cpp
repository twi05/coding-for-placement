#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int helper(int m, int n, vector<vector<int>> &dp)
{

    if (m == 0 && n == 0)
        return 1;

    if (m < 0 || n < 0)
        return 0;
    if (dp[m][n] != -1)
        return dp[m][n];
    return dp[m][n] += helper(m - 1, n, dp) + helper(m, n - 1, dp);
}
int uniquePaths(int m, int n)
{
    vector<vector<int>> dp(100, vector<int>(100, -1));
    return helper(m - 1, n - 1, dp);
}

int main()
{
    cout << uniquePaths(3, 2);
    return 0;
}