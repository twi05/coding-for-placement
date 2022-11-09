#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    ll sum = 0;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    ll chance = 1;
    while (v.size() > 0)
    {
        ll i = 0, j = v.size();
        if (chance % 2 != 0)
        {
            if (sum & 1 == 1)
                break;
            else
            {
                if (v[i] & 1 != 1 && v[j] & 1 != 1)
                {
                    i++;
                    j--;
                    
                }
                if (v[i] & 1 != 1)
                    i++;
                else
                {
                    if (v[j] & 1 != 1)
                        j--;
                }
            }
            v.erase(v.begin() + i, v.end() + j);
        }
        else
        {
            if (sum & 1 != 1)
            {
                break;
            }
            else
            {
                if (v[i] & 1 == 1 && v[j] & 1 == 1)
                {
                    i++;
                    j--;
                }
                if (v[i] & 1 == 1)
                    i++;
                else
                {
                    if (v[j] & 1 == 1)
                        j--;
                }
            }
            v.erase(v.begin() + i, v.end() + j);
        }
        if (i > j)
            break;
        chance++;
    }

    if (chance % 2 == 0)
        cout << "Second";
    else
        cout << "First";
    return 0;
}