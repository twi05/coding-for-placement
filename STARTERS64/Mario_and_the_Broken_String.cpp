#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n;
    cin >> t;
    string s, ts;

    while (t--)
    {
        cin >> n >> s;

        ts = s.substr(n / 2);
        s = s.substr(0, n / 2);

        if (s == ts)
            cout
                << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}