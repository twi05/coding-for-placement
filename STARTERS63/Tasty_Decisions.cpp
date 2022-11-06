#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    ll x, y;
    while (t--)
    {
        cin >> x >> y;
        if (x * 2 > y * 5)
            cout << "Chocolate";
        else if (x * 2 < y * 5)
            cout << "Candy";
        else
            cout << "Either";
        cout << endl;
    }
    return 0;
}