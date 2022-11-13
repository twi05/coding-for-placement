#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, m;
    cin >> n >> m;
    ll mx = m / n;
    if (n > m)
    {
        cout << 0 << endl;
        return 0;
    }
    map<int, int> mp;
    int x;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        mp[x]++;
    }
    int count = 0;
    while (mx)
    {
        for (auto v : mp)
        {
            count += v.second / mx;
        }
        if (count >= n)
        {
            break;
        }
        count = 0;
        mx--;
    }
    cout << mx;
    return 0;
}

