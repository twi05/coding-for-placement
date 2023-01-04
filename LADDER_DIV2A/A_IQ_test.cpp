#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool checkoddeven(vector<ll> v)
{
    bool res = false;
    int count = 0;
    count += v[0] % 2;
    count += v[1] % 2;
    count += v[2] % 2;

    if (count >= 2)
        return true;
    else
        return false;
}
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    bool oddeven = true;
    // odd for true
    if (oddeven == true)
    {
        for (int i = 0; i < n; i++)
        {
            
        }
    }
    return 0;
}