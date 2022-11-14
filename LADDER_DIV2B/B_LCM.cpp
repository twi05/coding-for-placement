#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    int count = 0;
    // int c = 2;
    // while (n != 1)
    // {
    //     while (n % c == 0)
    //         n = n / c;
    //     c++;
    //     count += 1;
    // }
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            if (n / i == i)
                count++;
            else // Otherwise print both
                count += 2;
        }
    }
    cout << count;
    return 0;
}