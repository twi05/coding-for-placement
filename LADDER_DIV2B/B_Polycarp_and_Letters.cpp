#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, sizeset;
    cin >> n;

    string s;
    cin >> s;
    ll maxcount = 0;
    set<char> sets;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            sets.insert(s[i]);
        }
        else
        {
            sets.clear();
        }
        sizeset = sets.size();
        maxcount = max(maxcount, sizeset);
    }
    cout << maxcount;
    return 0;
}