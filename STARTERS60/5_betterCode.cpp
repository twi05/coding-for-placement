#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
            cin >> v[i];

        long long mid = n / 2;
        for (long long i = 0; i < mid; i++)
            v[i] = v[v.size() - 1 - i] - v[i];

        bool f = 1;
        vector<int> b(mid);
        for (long long i = mid - 1; i >= 0; i--)
        {
            if (v[i] > v[n - i - 1])
            {
                f = 0;
                break;
            }
            else
            {
                b[i] = v[n - i - 1] - v[i] - b[i + 1];
                if (b[i] < 0)
                {
                    f = 0;
                    break;
                }
                else
                    b[i] = b[i] + b[i + 1];
            }
        }

        if (f)
            cout << b[0] << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}

