#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll h, p;
        vector<pair<ll, ll>> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> h;
            v[i].second = h;
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> p;
            v[i].first = p;
        }
        sort(v.begin(), v.end());
        h = 0;
        ll total = 0, ind = 0;
        while (k > 0 && ind < n)
        {
            h += k;
            while (ind < n && h <= v[ind].second)
                ind++;
            k -= v[ind].first;
        }
        if (ind == n)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}

int main2()
{
    ll t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll h, p;
        vector<pair<ll, ll>> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> h;
            v[i].second = h;
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> p;

            v[i].first = p;
        }

        sort(v.begin(), v.end());
        // for (auto i = v.begin(); i != v.end(); i++)
        // {
        //     cout << i->first << " " << i->second;
        //     cout << endl;
        // }
        ll total = 0, ind = 0;
        while (k > 0 && total < n)
        {
            total = 0;
            for (ll i = 0; i < n; i++)
            {

                v[i].second -= k;
                if (v[i].second <= 0)
                    total++;
            }
            k -= v[ind].first;
            if (ind < n - 1)
            {
                v[ind].first = 0;
                ind++;
            }

            if (ind == n - 1)
            {
                v[ind].first = 0;
            }
        }

        if (total == n)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}