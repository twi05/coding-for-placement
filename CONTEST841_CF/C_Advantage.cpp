#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];

        vector<ll> v2 = v;
        sort(v2.begin(), v2.end());

        for (ll i = 0; i < n; i++)
        {
            if (v[i] == v2[n - 1])
            {
                cout << v[i] - v2[n - 2];
            }
            else
            {
                cout << v[i] - v2[n - 1];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
