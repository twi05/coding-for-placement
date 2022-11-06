#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k;
    cin >> n >> k;

    ll nocandies = 0;
    ll ouraction = 0;
    ll step = 1;
    ll ate = 0;

    nocandies++;
    ouraction++;
    step++;

    while (ouraction < n)

    {
        if (nocandies == 0)
        {
            nocandies += step;
            step++;
            ouraction++;
            continue;
        }
        if (nocandies + step > k)
        {
            ouraction++;
            nocandies--;
            ate++;
            continue;
        }
        ouraction++;
        nocandies+=step;
        step++;
    }
    cout<<ate;

    return 0;
}