#include <bits/stdc++.h>
using namespace std;

int subset(vector<int> arr, int target, int n)
{
    if (target == 0)
    {
        return 1;
    }

    if (n == 0)
        return 0;

    if (arr[n - 1] <= target)
        return subset(arr, target - arr[n - 1], n - 1) + subset(arr, target, n - 1);
    else
        return subset(arr, target, n - 1);
}
int t[50][50];
int subsetMemoization(vector<int> arr, int target, int n)
{
    if (target == 0)
    {
        return 1;
    }

    if (n == 0)
        return 0;

    if (t[n][target] != -1)
    {
        return t[n][target];
    }
    if (arr[n - 1] <= target)
        return t[n][target] = subset(arr, target - arr[n - 1], n - 1) + subset(arr, target, n - 1);
    else
        return t[n][target] = subset(arr, target, n - 1);
}
int subsetTopDown(vector<int> arr, int target, int n)
{
    // INTIALISATION

 
    for (int i = 0; i < target+1; i++)
        t[0][i] = 0;
    for (int i = 0; i < n+1; i++)
        t[i][0] = 1;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < target + 1; j++)
        {
            if (arr[i - 1] <= j)
                t[i][j] = t[i - 1][j - arr[i - 1]] + t[i-1][j];
            else
                t[i][j] = t[i - 1][j];
        }
    }
    return t[n][target];
}

int main()
{
    vector<int> arr = {2, 3, 5, 6, 8, 10};
    cout << subset(arr, 10, arr.size());
    memset(t, -1, sizeof(t));
    cout << subsetMemoization(arr, 10, arr.size());
    memset(t, -1, sizeof(t));
    cout << subsetTopDown(arr, 10, arr.size());
    return 0;
}