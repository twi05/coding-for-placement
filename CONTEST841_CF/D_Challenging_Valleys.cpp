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
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        ll count = 0;
        bool flag = false;
        ll inc = 0, dec = 0;

        for (ll i = 1; i < n; i++)
        {
            if (v[i] > v[i - 1])
                inc++;
            else if (v[i] < v[i - 1])
            {
                dec++;
                if (inc > 0)
                 {   flag = true;
                break;}
            }
        }
            if (!flag)
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
    }
    return 0;
}
