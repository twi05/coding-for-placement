#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        string s;
        cin >> s;

        int ans[x];

        ans[0] = 1;

        for (int i = 1; i < x - 1; i++)
        {
            if (s[i] == s[i - 1])
                ans[i] = ans[i - 1];

            else
                ans[i] = i + 1;
        }

        for (int i = 0; i < x - 1; i++)
        {
            cout << ans[i] << " ";
        }cout<<endl;
    }
    return 0;
}