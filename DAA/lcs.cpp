#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void lcs(vector<vector<int>> v, string s, string t)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i][0] = 0;
    }
    for (int j = 0; j < v[0].size(); j++)
    {
        v[0][j] = 0;
    }

    for (int i = 1; i < v.size(); i++)
    {
        for (int j = 1; j < v[0].size(); j++)
        {
            if (s[i] != t[j])
                v[i][j] = max(v[i - 1][j], v[i][j - 1]);

            else
                v[i][j] = v[i - 1][j - 1] + 1;
        }
    }
    for (int i = 1; i < v.size(); i++)
    {
        for (int j = 1; j < v[0].size(); j++)
        {
            cout <<" "<< v[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{

    string s = "AGCCCTAAGGGCTACCTAGCTT";
    string t = "GACAGCCTACAAGCGTTAGCTTG";
    vector<vector<int>> v(s.length() + 1, vector<int>(t.length() + 1, 0));
    lcs(v, s, t);
    return 0;
}