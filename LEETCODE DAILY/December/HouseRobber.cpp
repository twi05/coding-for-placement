#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

std::vector<int> dp = std::vector<int>(100, -1);

int helperDpSpaceOptimised(vector<int> nums, int ind)
{

    int prev = nums[0];
    int prev2 = 0;
    int curi;

    int take, nottake;

    for (int i = 1; i <= ind; i++)
    {
        take = nums[i];
        if (i > 1)
            take += prev2;
        nottake = prev;

        curi = max(take, nottake);
        prev2 = prev;
        prev = curi;
    } 
    return curi;
}

int helperDp(vector<int> nums, int ind)
{
    vector<int> dp(100, 0);
    dp[0] = nums[0];

    int take, nottake;

    for (int i = 1; i <= ind; i++)
    {
        take = nums[i];
        if (i > 1)
            take += dp[i - 2];
        nottake = dp[i - 1];

        dp[i] = max(take, nottake);
    }
    return dp[ind];
}

int helperMemoisation(vector<int> nums, int i)
{
    if (i == 0)
        return nums[i];
    if (i < 0)
        return 0;

    if (dp[i] != -1)
        return dp[i];

    int pick = nums[i] + helper(nums, i - 2);
    int notpick = helper(nums, i - 1);

    return dp[i] = max(pick, notpick);
}
int rob(vector<int> &nums)
{
    return helperDp(nums, nums.size() - 1);
}

int main()
{

    return 0;
}

int rob2(vector<int> &nums)
{
    int sumOdd = 0;
    int sumEven = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 == 0)
            sumEven = max(nums[i] + sumEven, sumOdd);
        else
            sumOdd = (nums[i] + sumOdd, sumEven);
    }
    return max(sumEven, sumOdd);
}