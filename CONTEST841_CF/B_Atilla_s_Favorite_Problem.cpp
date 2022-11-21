#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        int maxi = 0;
        for (ll i = 0; s[i]; i++)
        {
            int a = s[i];
            maxi = max(maxi, a - 96);
        }
        cout << maxi << endl;
    }
    return 0;
}