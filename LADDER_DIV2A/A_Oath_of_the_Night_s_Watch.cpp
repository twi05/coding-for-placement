#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    ll x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int maxocc = 0;
    int minocc = 0;

    int maxi = v[n - 1];
    int mini = v[0];

    for (int i = 0; i < n; i++)
    {
        if (v[i] == maxi)
            maxocc++;
        if (v[i] == mini)
            minocc++;
    }
     if (v[0] != v[n - 1])
        cout << n - maxocc - minocc;
    else
        cout << n - maxocc;

}