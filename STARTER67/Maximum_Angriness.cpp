#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll count = 0;
        count += (n * (n - 1)) / 2;

        if (k < n / 2)
        {
            ll del = (n - (2 * k));
            count -= (del * (del - 1)) / 2;
        }

        cout << count << endl;
    }
    return 0;
}

/*
      ll n, k;
        cin >> n >> k;
        ll count = 0;
        for (int i = 1; i <= k; i++)
            count += max(0ll, n - i);

        count += max(0ll, k * (n - (2 * k)));
        for (int i = 0; i < k && n > k; i++)
            count += k - i - 1;

        cout << count << endl;
        */