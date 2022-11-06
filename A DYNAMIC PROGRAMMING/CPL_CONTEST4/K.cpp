#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    string num;
    cin >> n >> num;
    ll sum1 = 0, sum2;
    for (ll i = 0; i < n; ++i)
    {
        sum1 += (num[i] - '0');
        ll pos = i + 1;
        bool ok = 1;
        while (pos < n)
        {
            sum2 = 0;
            while (pos < n && sum2 < sum1)
                sum2 += (num[pos++] - '0');
            if (sum1 != sum2)
                ok = 0;
        }
        if (sum1 != sum2)
            ok = 0;
        if (ok)
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}