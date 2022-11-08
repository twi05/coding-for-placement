#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    // ll a = 1e18;
    ll k;
    cin >> k;

    string s;

    if (k & 1 == 1)
    {
        s += '6';
        k--;
    }

    while (k > 0)
    {
        s += '8';
        k -= 2;
    }

    if (s.size() > 18)
        cout << -1;
    else
        cout << s;
    return 0;
}