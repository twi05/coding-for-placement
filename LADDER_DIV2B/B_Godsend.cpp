#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    ll sum = 0;
    ll x;
    while (n--)
    {
        cin >> x;
        sum += x;
    }
    if (sum % 2 == 0)

        cout << "Second";
    else
        cout << "First";
    return 0;
}