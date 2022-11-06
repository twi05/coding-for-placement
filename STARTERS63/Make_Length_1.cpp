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
        cin >> n;
        cin >> s;
        ll i = 1;

        while (i <= s.size() - 1)
        {
            if (s[i] == s[i - 1])
            {
                s[i - 1] = '0';
                s.erase(i, 1);
                i=1;
            }
            else
                i++;
        }

if (s.size() == 1)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}