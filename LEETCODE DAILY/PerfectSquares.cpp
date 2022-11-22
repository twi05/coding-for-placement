#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// Memoisation
int solveMemo(int n, vector<int> &dp)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int minCnt = INT_MAX;
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        int sqr = i * i;

        cnt = 1 + solveMemo(n - sqr, dp);
        dp[n] = minCnt = min(cnt, minCnt);
    }
    return minCnt;
}

// DynamicProgramming
int solve(int n)
{
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    int minCnt = INT_MAX;
    for (int target = 1; target <= n; target++)
    {
        int mnCount = INT_MAX;
        for (int num = 1; num <= sqrt(target); num++)
        {
            int sqNum = num * num;
            int currCount = 1 + dp[target - sqNum];
            mnCount = min(mnCount, currCount);
        }
        dp[target] = mnCount;
    }
    return dp[n];
}
int numSquares(int n)
{
    return solve(n);
}

int main()
{
    cout << numSquares(12);
    return 0;
}
