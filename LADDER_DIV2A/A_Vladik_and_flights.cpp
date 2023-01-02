#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    string s;
a--;
b--;
    cin >> s;

    ll mini = LLONG_MAX;

    // for (char c : s)
    // {
    //     ll f = c - '0' ;
    //     mini = min(f + mini, mini);
    //     mini = min(f, mini);
    // }
    ll i, count = 0, lastocc;
    if (a <= b)
    {
        lastocc = s[a];
        for (i = b; i >= a; i--)
        {
            if (s[i] == lastocc)
                break;
        }
        cout << abs(b - i);
    }

    if (b < a)
    {
        lastocc = s[b];
        for (i = a; i <= b; i++)
        {
            if (s[i] == lastocc)
                break;
        }
        cout << abs(a - i);
    }


    return 0;
}