#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll max = LLONG_MIN;
        while (n--)
        {
            cin >> x;
            if (x > max)
                max = x;
        }
        cout << max<<endl;
    }
    return 0;
}