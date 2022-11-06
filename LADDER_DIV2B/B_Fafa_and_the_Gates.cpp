#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    string s;
    cin >> n >> s;
    char prev, curr;
    bool gate = false;
    ll count = 0;
    ll x = 0, y = 0;
    for (int i = 0; s[i]; i++)
    {
        char curr = s[i];
        if (curr == 'R')
            x = x + 1;
        else if(curr=='U')
            y = y + 1;
        if (gate)
        {
            if (prev == 'R' && curr == 'R')
                count++;
            else if (prev =='U' & curr == 'U')
                count++;
            gate = false;
        }
        else
        {
            if (x == y)
                gate = true;
        }
        prev = curr;
    }
    cout<<count;
    return 0;
}