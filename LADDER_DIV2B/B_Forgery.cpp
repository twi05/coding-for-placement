#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n > 3 || m > 3)
        cout << "YES";

    else
    {

        if (v[1].at(1) == '#')
            cout << "NO";
        else
            cout << "YES";
    }
    return 0;
}