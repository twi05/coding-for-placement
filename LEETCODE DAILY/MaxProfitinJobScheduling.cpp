#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int jobScheduling(vector<int> &startTime, vector<int> &endTime, vector<int> &profit)
{
    int n = startTime.size();
    vector<pair<int, pair<int, int>>> v(n);
    int maxprofit[n];
    for (int i = 0; i < startTime.size(); i++)
    {
        v[i].first = endTime[i];
        v[i].second.first = startTime[i];
        v[i].second.second = profit[i];
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            maxprofit[0] = v[i].second.second;
            continue;
        }

        int f=0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (v[j].first <= v[i].second.first)
            {
                f = maxprofit[j];
                break;
            }
        }
        maxprofit[i] = max(maxprofit[i - 1], f + v[i].second.second);
    }
    return maxprofit[n - 1];
}

int main()
{

    return 0;
}

struct Job
{
    int start, end, profit;
};

class Solution
{
public:
    int jobScheduling(vector<int> &startTime, vector<int> &endTime, vector<int> &profit)
    {
        int n = (int)startTime.size();

        Job arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i].start = startTime[i];
            arr[i].end = endTime[i];
            arr[i].profit = profit[i];
        }
        sort(arr, arr + n, [&](auto &j1, auto &j2)
             {
            if(j1.end == j2.end) 
                return j1.profit > j2.profit;
            return j1.end < j2.end; });

        vector<int> dp(n + 1, 0);
        dp[1] = arr[0].profit;

        for (int i = 2; i <= n; i++)
        {
            int l = 0, r = i - 2, j = 0;

            while (l <= r)
            {
                int mid = l + (r - l) / 2;

                if (arr[mid].end <= arr[i - 1].start)
                {
                    j = mid + 1;
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            dp[i] = max(dp[i - 1], arr[i - 1].profit + dp[j]);
        }
        return dp[n];
    }
};