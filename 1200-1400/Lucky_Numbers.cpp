#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.find('7') == string::npos)
            cout << "NO";
        else
            cout << "YES";
        cout << "\n";
    }
    return 0;
}