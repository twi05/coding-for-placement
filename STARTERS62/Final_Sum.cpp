#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n, q, x, y;
    cin >> t;

    while (t--)
    {
        cin >> n >> q;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
        }
        for (ll i = 0; i < q; i++)
        {
            cin >> x >> y;
            if ((y - x +1) % 2 == 0 )
                continue;
            else
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}