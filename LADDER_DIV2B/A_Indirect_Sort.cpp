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
        ll minind = 0;
        ll maxind = 0;
        ll minnum = LLONG_MAX;
        ll maxnum = LLONG_MIN;
        ll x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x < minnum)
            {
                minnum = x;
                minind = i;
            }
            if (x > maxnum)
            {
                maxnum = x;
                maxind = i;
            }
        }
        if (minind > 0 || maxind == 0)
            cout << "No";
        else
            cout << "Yes";
        cout << endl;
    }
    return 0;
}