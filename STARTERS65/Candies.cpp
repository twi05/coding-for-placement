#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<ll, ll> mp;
        ll x;
        bool flag = false;
        for (int i = 0; i < 2*n; i++)
        {
            cin >> x;
            mp[x]++;
            if (mp[x] > 2 && !flag)
            {
                cout << "No" << endl;
                flag = true;
            }
        }
        if (!flag)
            cout << "Yes" << endl;
    }
    return 0;
}