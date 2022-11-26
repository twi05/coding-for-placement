#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, f;
    cin >> n >> f;
    vector<pair<ll, ll>> v(n);
    ll l, k;
    pair<ll, ll> p;
    for (ll i = 0; i < n; i++)
    {
        cin >> k >> l;
        p.first = min(2 * k, l);
        p.second = min(l, k);
        v[i] = p;
    }

    sort(v.begin(), v.end());
    reverse(v.begin(),v.end());

    ll count = 0;
    for (ll i = 0; i <v.size(); i++)
    {
        if (f >  0)
        {
            count += v[i].first;
            f--;
        }
        else
            count += v[i].second;
    }
    cout << count;

    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, f;
    cin >> n >> f;
    vector<pair<ll, ll>> v(n);
    ll l, k;
    pair<ll, ll> p;
    for (ll i = 0; i < n; i++)
    {
        cin >> k >> l;
        p.first = min(2 * k, l);
        p.second = min(l, k);
        v[i] = p;
    }

    sort(v.begin(), v.end());

    ll count = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (f >  0)
        {
            count += v[i].first;
            f--;
        }
        else
            count += v[i].second;
    }
    cout << count;

    return 0;
}*/