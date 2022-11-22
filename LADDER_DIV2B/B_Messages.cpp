#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, a, b, c, t;
    cin >> n >> a >> b >> c >> t;
    ll total = 0;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];



        ll sumfac = 0;

        for (ll i = 0; i < n; i++)
        {
            total += max(a,a - ((t - v[i]) * (b-c)));
        }
        cout << total;
    
    return 0;
}