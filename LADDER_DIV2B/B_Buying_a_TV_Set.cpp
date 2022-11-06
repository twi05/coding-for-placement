#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y)
{
    if (x == 0)
        return y;

    return gcd(x % y, x);
}
int main()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;

    ll gcdnum =__gcd(max(x, y), min(x, y));

    x = x/gcdnum;
    y = y/gcdnum;
    cout<<min(a/x, b/y);

    return 0;
}