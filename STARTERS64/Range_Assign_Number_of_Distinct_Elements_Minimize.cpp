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
        set<ll> s;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        ll i = 0, j = n - 1;
        while (v[i] != v[j])
            j--;

        ll k = n - 1;
        while (v[i] != v[k])
            i++;

        if (s.size() <= 2)
            cout << "YES";
        else if (i <= 1)
            cout << "YES";
        else if (j >= n - 2)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}