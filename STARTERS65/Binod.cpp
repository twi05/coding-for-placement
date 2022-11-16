#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{

    ll t, n, q;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        vector<ull> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        ll k, l1, r1, l2, r2, count = 0;
        while (q--)
        {
            cin >> k >> l1 >> r1 >> l2 >> r2;
            for (ll i = l1-1; i < r1; i++)
            {
                for (ll j = l2-1; j < r2; j++)
                {
                    bitset<64> b1(v[i]);
                    bitset<64> b2(v[j]);

                    b1 ^= b2;
                    int isset = b1.test(k);
                    if (isset == 1)
                        count++;
                }
            }
            cout << count<<endl;
            count=0;
        }
    }
    return 0;
}