#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k;
    cin >> n >> k;

    if (k < n)
    {
        cout<<k/2<<endl;
        return 0;

    }
    else if(k/2>n)
    {
        cout<<0<<endl;
        return 0;
    }
    
    ll c= (k-1)/2;
    cout<<n-c<<endl;

        return 0;
}