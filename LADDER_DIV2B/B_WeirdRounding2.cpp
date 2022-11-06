#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string n;
    ll k;
    cin >> n >> k;
    ll count = 0;
    int i = n.size() - 1;
    ll noofzeros = 0;

    while (noofzeros < k && i)
    {
        if (n[i] != '0')
        {
            count++;
        }
        else
            noofzeros++;
        i--;
    }

    if (count <= 0)
        cout << n.size() - 1;
    else
        cout << count;
    return 0;
}