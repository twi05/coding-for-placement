

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;

    ll k, count = 0;
    cin >> s >> k;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (k <= 0)
        {
            break;
        }

        if (s[i] != '0')
        {
            count++;
        }
        else
            k--;
    }
    if (k <= 0)
    {
        cout << count;
    }
    else
        cout << s.length() - 1;

    return 0;
}