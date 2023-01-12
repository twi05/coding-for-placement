#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n, y;
    cin >> t;
    while (t--)
    {
        cin >> n >> y;
        ll temp, oropr = 0;
        for (auto i = 0; i < n; i++)

        {
            cin >> temp;
            oropr = oropr | temp;
        }
        ll xoru = oropr ^ y;
        ll check = xoru | oropr;
        if (check == y)
            cout << xoru;
        else
            cout << -1;
        cout << "\n";
    }
    return 0;
}