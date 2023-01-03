#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int x, hh, mm;

    cin >> x >> hh >> mm;
    int count = 0;
    while (hh % 10 != 7 && mm % 10 != 7)
    {
        mm -= x;
        if (mm < 0)
        {
            hh--;
            mm += 60;
        }
        if (hh < 0)
        {
            hh = 23;
        }

        count++;
    }

    cout << count;
    return 0;
}