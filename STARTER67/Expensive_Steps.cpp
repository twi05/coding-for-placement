#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >>x2>> y2;

        ll countmin1 = abs(x2-x1) + abs(y2-y1);
        ll countmin =0;
        countmin =min(min(abs(n+1-x1),abs(n+1 - y1)), min(abs(x1),abs(y1)));
        countmin+=min(min(abs(n+1-x2),abs(n+1 - y2)), min(abs(x2),abs(y2)));
        cout<<min(countmin1,countmin)<<endl;
    }

    return 0;
}