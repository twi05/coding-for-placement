#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());
    float avg = (float)sum / n;
    ll i = 0;
    while (avg < 4.5)
    {
        sum += (5 - v[i++]);
        avg = (float)sum / n;
    }
    cout << i;
    return 0;
}