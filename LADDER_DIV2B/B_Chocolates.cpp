#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, count = 0;
    cin >> n;
    vector<int> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    count += v[n - 1];
    ll max = v[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        if (max == 1)
        {
            break;
        }
        else if (v[i] < max)
        {
            count += v[i];
            max = v[i];
        }
        else if (v[i] >=max)
        {
            count += max-1;
            max --;
        }
    }
    cout<<count;

    return 0;
}