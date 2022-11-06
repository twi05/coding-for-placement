#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll count = 0, n;
        cin >> n;
        map<int, int> m;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        // unordered_set<int> s(v.begin(), v.end());
        ll a,b;
        for (auto i = m.begin(); i != m.end();)
        {
            
             a = i->first;
            // cout<<a<<" a"<<endl;
            i++;
             b = i->first;
             
            // cout<<b<<" b"<<endl;
            if (a ^ b > 1)
            {
                count += min(m[a], m[b]);

            }
        }
        cout << count << endl;
    }
    return 0;
}