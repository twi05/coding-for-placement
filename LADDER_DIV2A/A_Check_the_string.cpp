#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;
    int i = 0;
    int noa = 0, nob = 0, noc = 0;
    while (s[i] == 'a')
    {
        noa++;
        i++;
    }
    while (s[i] == 'b')
    {
        nob++;
        i++;
    }
    while (s[i] == 'c')
    {
        noc++;
        i++;
    }

    if (i != s.length())
        cout << "NO";

    else if (noa == 0 || nob == 0 || noc == 0)
        cout << "NO";

    else if (nob == noc || noa == noc)
        cout << "YES";

    else
        cout << "NO";

    return 0;
}