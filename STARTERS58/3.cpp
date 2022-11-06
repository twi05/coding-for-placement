#include <iostream>
using namespace std;
#include <map>

int main()
{
    long long t,x,n;
    cin >> t;

    while (t--)
    {
        map<long long, long long> m;
        cin >> n;
        for (long long i = 0; i < n; i++)
        {
            cin >> x;
            if (m[x])
                m[x]++;
            else
                m[x] = 1;
        }

        long long max = 0;
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->second > max)
                max = i->second;
        }
        cout << n - max << endl;
        m.clear();
        max=0;
    }
    return 0;
}