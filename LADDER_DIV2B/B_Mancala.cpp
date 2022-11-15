#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll check, ans=0, i, countOdd = 0, firstcheck, maxans = 0,index;
    vector<ll> v(14);
    vector<ll> prefix_sum(14);
    for (int i = 0; i < 14; i++)
    {
        cin >> v[i];
        if (v[i] & 1 == 1)
            countOdd+=v[i] +1;
        prefix_sum[i] += countOdd ;
    }

    for (i = 0; i < 14; i++)
    {
        check = v[i] + i;
        if (check >= 14)
        {
            
            firstcheck = check - 13 + i;
            ans = prefix_sum[firstcheck%13] - prefix_sum[i];
            ans += prefix_sum[check%13];
        }
        else
        {
            ans = prefix_sum[check%13] - prefix_sum[i];
        }
        if (ans > maxans)
        {
            index = i;
            maxans = max(ans, maxans);
        }
        ans = 0;
    }
    cout << maxans;
    return 0;
}   