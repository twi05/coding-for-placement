#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    ll x, y, z;

    while (t--)
    {
        cin >> x >> y >> z;
        if (z >= y)
            cout << x;
        else
        {
            if (y % z == 0)
                cout << x * (y / z);
            else
                cout << x * (y / z + 1);
        }
        cout << endl;
    }
    return 0;
}