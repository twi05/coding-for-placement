#include <bits/stdc++.h>
using namespace std;
typedef long double ll;
void solve(ll x, ll y)
{
    ll X = y * log(x);
    ll Y = x * log(y);

    if (abs(X - Y) < 1e-9)
    {
        cout << "=";
    }
    else if (X > Y)
        cout << ">";
    else
        cout << "<";
}
int main()
{
    ll x, y;
    cin >> x >> y;

    solve(x, y);
    return 0;
}