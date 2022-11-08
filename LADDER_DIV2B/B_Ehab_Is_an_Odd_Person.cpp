#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    bool even = false;
    bool odd = false;

    ll n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            even = true;
        else
            odd = true;
    }

    if (even && odd)
        sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}