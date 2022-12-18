#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, a, b, c;
    cin >> n;

    while (n--)
    {
        cin >> a >> b >> c;

        if (a == b == c)
        {
            if (a == 1)
                cout << a;

            else
                cout << a + 1;
        }
        else if (a == b)
        {
            if (a == 1)
            {
                cout << 2;
            }
            else
            {
                if (c > a)
                    cout << c;
                else if (c < a)
                    cout << a + 1;
            }
        }
        else if (c == b)
        {
            if (b == 1)
            {
                cout << 2;
            }
            else
            {
                if (a > b)
                    cout << a;
                else if (a < b)
                    cout << b + 1;
            }
        }
        else if (c == a)
        {
            if (c == 1)
            {
                cout << 2;
            }
            else
            {
                if (b > a)
                    cout << b;
                else if (b < a)
                    cout << a + 1;
            }
        }
        else
        {
            ll res = 0;
            vector<ll> v(3);
            v[0] = a;
            v[1] = b;
            v[2] = c;

            sort(v.begin(), v.end());

            res = abs(v[0] - v[1]);
            a = v[0];
            b = v[0];
            c = v[2] -res;
            if (a == b)
            {
                if (a == 1)
                {
                    cout << res+2;
                }
                else
                {
                    if (c > a)
                        cout << c +res  ;
                    else if (c < a)
                        cout << a +res+ 1;
                }
            }
        }
        cout << endl;
    }

    return 0;
}