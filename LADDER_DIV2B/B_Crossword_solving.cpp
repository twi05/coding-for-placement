#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    string s, t;
    cin >> s >> t;

    map<int, vector<int>> map;
    int countdiff = 0;
    for (int i = 0; i < t.length() - s.length()+1; i++)
    {
        vector<int> v;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] != t[i + j])
            {
                countdiff++;
                v.push_back(j + 1);
            }
        }
        map[countdiff] = v;
        countdiff = 0;
    }

    cout << map.begin()->first<<endl;
    for (int a : map.begin()->second)
    {
        cout << a << " ";
    }

    return 0;
}