#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll ans;
    ans = 100000000 % (33 * 5);
    cout<<ans<<endl;
    

    ans %=31 ;
    ans %=31*2 ;
    ans %=31*5 ;
    // cou


    cout << ans;
    return 0;
}