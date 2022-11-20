#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;

    ll count = 1;
    ll prevx = 0, prevy = 0;

    ll x, y;
    ll diffx, diffy;
    for(ll i=0;i<n;i++)
    {
        cin >> x >> y;
        diffx = x - prevx;
        diffy = y - prevy;
        if (diffx == 0 || diffy == 0)
            continue;
        else if (diffx >= diffy)
            count += diffy;
        else if (diffx < diffy)
            count += diffx;
        prevx = x;
        prevy = y;
    }
    if (x == y && (x!=0 && y!=0) && n>1)
        count += 1;
    cout << count;

    return 0;
}