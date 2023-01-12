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
        ll xoru = 0;
        ll temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            xoru ^= temp;
        }
        if ((xoru == 0 && (n % 2 == 0)) || n % 2 == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}