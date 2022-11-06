#include <bits/stdc++.h>
using namespace std;
int subset(vector<int> arr, int ts, int ss, int n, int diff)
{
    if (n == 0)
    {
        if (abs(2 * ss - ts) == diff)
            return 1;
        else
            return 0;
    }
    return subset(arr, ts, ss + arr[n - 1], n - 1, diff) + subset(arr, ts, ss, n - 1, diff);
}

int diff=1;
int countdiffSUbset=0;
int minSubsetSumDifference(vector<int> arr, int target, int n)
{
    bool t[200][200];

    for (int i = 0; i < target + 1; i++)
        t[0][i] = false;
    for (int i = 0; i < n + 1; i++)
        t[i][0] = true;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < target + 1; j++)
        {
            if (arr[i - 1] <= j)
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            else
                t[i][j] = t[i - 1][j];
        }
    }

    for (int i = 1; i <= target; i++)
    {
        if (t[n][i] == true)
        {
            int minim_arr = abs(2 * i - target);

            if (minim_arr == diff)
                countdiffSUbset++;
        }
    }
    return countdiffSUbset;
}

int main()
{
    vector<int> arr = {1, 1, 2, 3};
    int sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    int diff = 1;
    cout << subset(arr, sum, 0, arr.size(), diff) << endl;
    cout << minSubsetSumDifference(arr, sum, arr.size());
    return 0;
}