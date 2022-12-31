#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int helper(int m, int n, vector<vector<ll>> &dp, vector<vector<int>> &obstacleGrid)
{

    if (m == 0 && n == 0)
        return 1;

    if (obstacleGrid[m][n] == 1)
        return 0;

    if (m < 0 || n < 0)
        return 0;
    if (dp[m][n] != -1)
        return dp[m][n];

    return dp[m][n] += helper(m - 1, n, dp, obstacleGrid) + helper(m, n - 1, dp, obstacleGrid);
}
int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
{
    vector<vector<ll>> dp(100, vector<ll>(100, -1));
    return helper(obstacleGrid.size() - 1, obstacleGrid[0].size() - 1, dp, obstacleGrid);
}
int main()
{

    return 0;
}