#include <bits/stdc++.h>
using namespace std;
typedef long long ll;   
int main()
{
    ll n, d, e;
    cin >> n >> d >> e;

    ll ans = n;

    // for (ll i = 0; i * 5 * e < n; i++)
    // {
    //     ans = min(ans, (n - (5 * i * e)) % d)
    // }

    // cout << ans;

    // ll dollars[] = {1, 2, 5, 10, 20, 50, 100};
    // ll euros[] = {5, 10, 20, 50, 100, 200};

    // ll first, second;
    // first = n;
    // second = n;
    // ll ans;
    // for (ll ele : dollars)
    // {
    //     ans = ans % (ele * d);
    // }
    // for (ll eu : euros)
    // {
    //     ans = ans % (eu * e);
    // }

    // cout<<ans;
    // ll first = n % (d);
    // first %= 2 * d;
    // first %= 5 * d;
    // second %= d;
    // second %= 2 * d;
    // second %= 5 * d;
    // cout << min(first, second);
    return 0;
}