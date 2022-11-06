#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll count = 0, n, x;
        cin >> n;
        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            m[x]++;
        }
        ll maxtotal = INT_MIN;
        ll total = 0;
        for (auto i = m.begin(); i != m.end(); i++)
        {
            total = i->second;
            if (i->first % 2 == 0 && m.find(i->first + 1) != m.end())
            {
                total += m[i->first + 1];
            }
            maxtotal= max(maxtotal,total);
        }
        cout << n - maxtotal << endl;
    }
    return 0;
}