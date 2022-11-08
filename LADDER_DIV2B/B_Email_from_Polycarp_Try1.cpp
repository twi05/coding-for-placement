#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        bool flag = false;
        string s;
        string t;
        cin >> s >> t;

        ll i = 0, j = 0;
        char currs = s[0];
        char currt = t[0];
        char nexts = ' ', nextt = ' ';
        while (s[i] && t[i])
        {
            while (s[i])
            {
                if (currs == s[i])
                    i++;
                else
                {
                    nexts = s[i];
                    currs = s[i];
                    break;
                }
            }
            while (t[i])
            {
                if (currt == t[i])
                    i++;
                else
                {
                    nextt = t[i];
                    currt = t[i];
                    break;
                }
            }
            {
                if (currs != currt || nexts != nextt)
                {
                    cout << "NO" << endl;
                    flag = true;
                    break;
                }
            }
        }
        if (!flag)
            cout << "YES" << endl;
    }
    return 0;
}