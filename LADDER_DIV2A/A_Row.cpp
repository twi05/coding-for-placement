#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 0 && s == "1")
        return true;

    if (n == 1 && (s == "01" || s == "10"))
        return true;

    bool correct = true;
    s = '0' + s + '0';

    for (int i = 1; s[i]; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
            correct = false;
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (s[i] == '0' && s[i + 1] == '0' && s[i - 1] == '0')
            correct = false;
    }

    correct ? cout << "Yes" : cout << "No";

    return 0;
}