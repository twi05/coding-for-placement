#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int ans = 0;
        int n;
        cin >> n;
        unordered_map<int, int> m;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (m[x])
            {
                m[x]++;
            }
            else
            {
                m[x] = 1;
            }
        }
        int maxocc = 0;
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->second > maxocc)
            {
                maxocc = i->second;
            }
        }
        n = maxocc;
        while (n > 1)
        {
            if (n & 1 == 1)
                n = (n + 1) / 2;
            else
                n /= 2;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}