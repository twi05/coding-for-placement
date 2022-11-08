#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    string s;
    cin >> s;
    vector<int> four(4, 0);
    int r, b, y, g;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '!')
        {
            four[i % 4]++;
        }
        else if (s[i] == 'R')
            r = i % 4;
        else if (s[i] == 'B')
            b = i % 4;
        else if (s[i] == 'G')
            g = i % 4;
        else if (s[i] == 'Y')
            y = i % 4;
    }
    cout << four[r] << " " << four[b] << " " << four[y] << " " << four[g];
    return 0;

}