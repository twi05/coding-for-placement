#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    ll count = 0;
    ll i = n - 1;
    while (count < s && n-- >= 0)
    {
        if (n == 0)d
        {
        }

        count += v[i];
    }
    cout << v[0];
    return 0;
}