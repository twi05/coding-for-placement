#include <bits/stdc++.h>
using namespace std;
int subset(vector<int> arr, int ts, int ss, int n)
{
    if (n == 0)
        return abs(2 * ss - ts);

    return min(subset(arr, ts, ss + arr[n - 1], n - 1), subset(arr, ts, ss, n - 1));
}

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
    int mini = INT_MAX;

    for (int i = 1; i <= target / 2; i++)
    {
        if (t[n][i] == true)
        {
            int minim_arr = abs(2 * i - target);
            
            if (minim_arr < mini)
                mini = minim_arr;   
        }
    }
    return mini;    
}

int main()
{
    vector<int> arr = {1, 6, 11, 5};
    int sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    cout << subset(arr, sum, 0, arr.size()) << endl;
    cout << minSubsetSumDifference(arr, sum, arr.size());
    return 0;
}