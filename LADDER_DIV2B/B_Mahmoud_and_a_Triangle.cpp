#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
        cin >> v[i];


    sort(v.begin(), v.end());

    for (ll i = 1; i < n -1; i++)
    {
        if (v[i - 1] + v[i] > v[i + 1])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}