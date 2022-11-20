#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;

    ll count = 1;
    ll prevx = 0, prevy = 0;

    ll x, y;
    ll diffx, diffy;
    for (ll i = 0; i < n; i++)
    {
        cin >> x >> y;
        diffx = max(prevx, prevy);
        diffy = min(x, y);

        if (x == prevx && y == prevy)
            continue;

        ll diff = diffy - diffx + 1;

        if (prevx == prevy)
            diff--;

        if (diff > 0)
            count += diff;

        prevx = x;
        prevy = y;
    }

    cout << count;

    return 0;
}