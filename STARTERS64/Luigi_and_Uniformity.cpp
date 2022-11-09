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
        vector<ll> v(n);
        ll minnum = LLONG_MAX;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            minnum = min(v[i], minnum);
        }
        ll count = 0;
        bool flag = false;
        ll count1 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] % minnum == 0 && v[i] != minnum)
                count++;
            if (v[i] % minnum != 0)
                flag = true;
            if (v[i] == 1  && v[i] != minnum)
                count1++;
        }
        if (flag)
            cout << n - count1 << endl;
        else if (count1 > 0)
            cout << n - count1;
        else
            cout << count << endl;
    }
    return 0;
}