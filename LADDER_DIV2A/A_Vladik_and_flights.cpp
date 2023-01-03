#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, start, end;
    cin >> n >> start >> end;
    string s;
    cin >> s;
    start--;
    end--;

    if (s[start] == s[end])
        cout << "0";
    else
        cout << "1";
    return 0;
}