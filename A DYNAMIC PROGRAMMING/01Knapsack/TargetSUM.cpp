#include <bits/stdc++.h>
using namespace std;

int countSubset(vector<int> &nums, int target, int n)
{

    if (n == 0)
    {
        if (target == 0)
            return 1;
        else
            return 0;
    }

    if (nums[n - 1] <= target)
    {
        return countSubset(nums, target - nums[n - 1], n - 1) + countSubset(nums, target, n - 1);
    }
    else
    {
        return countSubset(nums, target, n - 1);
    }
}
int findTargetSumWays(vector<int> &nums, int target)
{
    int sum = 0;

    for (int i = 0; i < nums.size(); i++)
        sum += nums[i];

    if (target > sum || (sum + target) % 2 != 0)
        return 0;
    else if (target < 0 && target < (-1 * sum))
        return 0;

    target = (sum + target) / 2;
    return countSubset(nums, target, nums.size());
}
int main()
{
    vector<int> v = {1, 1, 2, 3};
    cout << findTargetSumWays(v, 1);
    return 0;
}