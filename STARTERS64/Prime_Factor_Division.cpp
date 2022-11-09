#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/* Driver code */
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll n = b;
        ll c = 2;

        set<ll> s;
        bool flag = false;
        while (n > 1)
        {
            if (n % c == 0)
            {
                if (a % c != 0)
                {
                    cout << "NO" << endl;
                    flag = true;
                    break;
                }
                n /= c;
            }
            else
                c++;
        }

        if (!flag)
            cout << "YES" << endl;
    }
    return 0;
}