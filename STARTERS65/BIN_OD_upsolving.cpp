#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, q, x;
    cin >> n >> q;

    vector<vector<int>> v(n + 1, vector<int>(60, 0));

    for (ll i = 1; i <= n; i++)
    {
        cin >> x;
        int k = 0;
        while (x >> k)
        {
            v[i][k] = x >> k & 1;
            k++;
        }
    }

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 0; j < 60; j++)
        {
            v[i][j] += v[i - 1][j];
        }
    }

    while (q--)
    {
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        ll ans;

        ll ones1 = v[r1][k] - v[l1 - 1][k];
        ll zeros1 = r1 - l1 + 1 - ones1;
        ll ones2 = v[r2][k] - v[l2 - 1][k];
        ll zeros2 = r2 - l2 + 1 - ones2;

        

        cout<<ones1*zeros2 + zeros1*ones2<<endl;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}