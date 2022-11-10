#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/* Driver code */

void solve()
{
    ll a, b;
    cin >> a >> b;

    ll x;
    while (b != 1)
    {

        x = __gcd(a, b);
        b /= x;
        if (x == 1)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}