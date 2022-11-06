#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b;
    cin >> a >> b;
    ll ans = 1;
    ll last = 0;
    while (b > a)
    {
        last = b % 10;
        ans *= last;
        if(last==0){
            break;
        }
        b--;
    }
    cout << ans % 10;
    return 0;
}