#include <bits/stdc++.h>
using namespace std;
bool subsetSumProblem(vector<int> &nums, int target)
{
bool t[201][20000];
    

    for (int i = 0; i < target+1; i++)
        t[0][i] = false;
    for (int i = 0; i < nums.size()+1; i++)
        t[i][0] = true;

    for (int i = 1; i <  nums.size()+1; i++)
    {
        for (int j = 1; j <target+1; j++)
        {
            if (nums[i - 1] <= j)
            {
                t[i][j] = t[i-1][j - nums[i - 1]] || t[i - 1][j];
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[nums.size()][target];
}

bool canPartition(vector<int> &nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
        sum += nums[i];

    if (sum & 1 == 1)
        return false;

    int target = sum / 2;

    return subsetSumProblem(nums, target);
}












int main()
{
    vector<int> nums = {1, 5, 11, 5};
    cout << canPartition(nums);
    return 0;
}