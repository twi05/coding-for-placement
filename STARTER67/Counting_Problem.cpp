#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 1)
                count++;
        }
        if (count % 2 != 0 || count == 0)
            cout << "NO";
        else
            cout << "YES";
        cout << "\n";
    }
    return 0;
}

/*
ll counteven = 0, countodd = 0, count1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 1)
                count1++;
            else if (x & 1 == 1)
                countodd++;
            else
                counteven++;
        }
        if ((countodd + count1) == n)
        {
            if (count1 % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }
        if (countodd % 2 != 0 && counteven > 1)
        {
            if (count1 % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }
        if (count1 % 2 == 0 && counteven % 2 == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        if (count1 % 2 != 0 && counteven % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "NO" << endl;
*/