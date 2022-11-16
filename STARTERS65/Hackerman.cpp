#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;

        int count = 0;
        a = a + b;
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
                count++;
        }
        if (count > 0)
            cout << "Bob";
        else
            cout << "Alice";
        cout << endl;
    }
    return 0;
}