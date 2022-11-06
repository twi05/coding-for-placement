#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long t, x;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> x;
            v[i] = x;
        }
        if (n == 1)
        {
            cout << 0;
            continue;
        }
        if (v[0] > v[n - 1])
        {
            cout << -1 << endl;
            continue;
        }

        long long mid = n / 2;
        vector<long long> main(mid);

        for (long long i = 0; i < mid; i++)
        {
            main[i] = v[i];
        }

        for (long long i = 0; i < mid; i++)
        {
            main[i] = v[v.size() - 1 - i] - main[i];
        }

        bool f = 1;
        long long count = 0;
        for (long long i = 0; i < mid - 1; i++)
        {
            if (main[i] < main[i + 1] || main[i] < 0)
            {
                cout << -1 << endl;
                f = 0;
                break;
            }

            count += main[i] - main[i + 1];
        }
        if (f){
            count+= main[mid-1];
            cout << count << endl;}
    }
    return 0;
}
