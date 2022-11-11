#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> m;
        for (int i = 0; i < 2 * n; i++)
        {
            int a;
            cin >> a;
            m[a]++;
        }
        int maxi = INT_MIN;
        for (auto it : m)
        {
            maxi = max(maxi, it.second);
        }
        int limit = n + (n + 1) / 2;
        if (maxi > limit)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}
