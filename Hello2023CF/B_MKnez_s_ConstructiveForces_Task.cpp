#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "YES\n";
            for (int i = 0; i < n / 2; i++)
                cout << 1 << " " << -1 << " ";
        }
        else if (n == 3)
        {
            cout << "NO";
        }
        else
        {
            ll x = n / 2;
            
            cout << "YES\n";
            for (int i = 0; i < x; i++)
            {

                cout << 1-x << " " << x << " ";
            }
            cout << 1-x;
        }
        cout << "\n";
    }
    return 0;
}