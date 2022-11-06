#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(k);
    ll minrem = LLONG_MAX;
    ll num = 0;

    for (ll i = 0; i < k; i++)
    {
        cin>>v[i];
        if ( n % v[i] < minrem)
        {
            minrem = n%v[i];
            num = i;
        }
        // cout<<minrem<<endl;
    }

    cout<<num+1<<" "<<n/v[num];

    return 0;
}