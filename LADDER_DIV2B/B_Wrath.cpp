#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, wrath = 0, kill = 0;
    cin >> n;
    vector<int> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    wrath =  n-1 - v[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        if (i >= wrath)
            kill++;

        if (i - v[i] < wrath)
            wrath = i - v[i];
    }

    cout << n - kill;
    return 0;
}