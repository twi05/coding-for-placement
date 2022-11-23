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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        ll count = 0;
        bool flag = false;

        for (ll i = 1; i < n - 2; i++)
        {
            if (v[i - 1] > v[i] && v[i] < v[i + 1])
                count++;

            if (count > 1)
            {
                flag = true;
                break;
            }
        }
        if (n > 1 && v[0] < v[1])
            count++;
        if (n > 1 && v[n - 2] > v[n - 1])
            count++;
        if (count > 1)
        {
            flag = true;
        }
        if (!flag || n == 1 || count <= 1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}