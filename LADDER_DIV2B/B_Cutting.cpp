#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, b;
    cin >> n >> b;
    vector<int> v(n);
    ll odd = 0;
    ll even = 0;
    vector<ll> cost;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] & 1 == 1)
            odd++;
        else
            even++;
        if (odd == even)
        {
            odd = 0;
            even = 0;
            cost.push_back(abs(v[i] - v[i + 1]));
        }
    }
    sort(cost.begin(), cost.end());
    ll count = 0;
    for (int i = 0; i < cost.size(); i++)
    {
        if (cost[i] <= b)
        {
            count++;
            b -= cost[i];
        }
    }
    cout<<count;
    return 0;
}