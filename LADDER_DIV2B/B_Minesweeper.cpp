#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> n >> m;
    vector<vector<char>> v(n);
    vector<char> temp(m);
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        for (int j = 0; j < m; j++)
        {
            temp[j] = str[j];
        }
        v[i] = temp;
    }
    int bomb = 0;
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            if (v[r][c] == '*')
                continue;
            if (r > 0)
                if (v[r - 1][c] == '*')
                    bomb++;
            if (c > 0)
                if (v[r][c - 1] == '*')
                    bomb++;
            if (r > 0 && c > 0)
                if (v[r - 1][c - 1] == '*')
                    bomb++;
            if (r < n - 1)
                if (v[r + 1][c] == '*')
                    bomb++;
            if (c < m - 1)
                if (v[r][c + 1] == '*')
                    bomb++;
            if (r < n - 1 && c < m - 1)
                if (v[r + 1][c + 1] == '*')
                    bomb++;
            if (r > 0 && c < m - 1)
                if (v[r - 1][c + 1] == '*')
                    bomb++;
            
            if (r < n - 1 && c > 0)
                if (v[r + 1][c - 1] == '*')
                    bomb++;

            // cout<<bomb<<" bomb";
            if ((bomb > 0 && v[r][c] == '.') || ( v[r][c] != '.' && int(v[r][c] - '0') != bomb))
            {
            // cout << r << " r" << c << " c"<< " bomb->" << bomb << endl;
                cout << "NO";
                return 0;
            }
            bomb = 0;
        }
    }
    cout << "YES";
    return 0;
}