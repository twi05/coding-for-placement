#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    ll a, b, n;
    while (t--)
    {
        cin >> n >> a >> b;
        if (a == b && b == a && n == a)
            cout << "Yes";
        else if (n - 1 > a + b)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}