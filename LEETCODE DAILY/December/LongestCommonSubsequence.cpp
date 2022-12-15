#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


std::vector<vector<int>>arr = std:: vector<vector<int>>(100, vector<int>(100,-1));

int lcs(string s1, string s2, int l1, int l2)
{
    if (l1 == 0 || l2 == 0)
    {
        return 0;
    }
    
    else if (s1[l1 - 1] == s2[l2 - 1])
    {
        arr[l1 - 1][l2 - 1] = 1 + lcs(s1, s2, l1 - 1, l2 - 1);
    }
    else if (arr[l1 - 1][l2 - 1] == -1)
    {
        arr[l1 - 1][l2 - 1] = max(lcs(s1, s2, l1 - 1, l2), lcs(s1, s2, l1, l2 - 1));
    }
    return arr[l1 - 1][l2 - 1];
}

int longestCommonSubsequence(string text1, string text2)
{
    int l1 = text1.length(), l2 = text2.length();

    return lcs(text1, text2, l1, l2);
}


int lcs(vector<vector<int>> v, string s, string t)
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
  return v[s.size()][t.size()];
}
int longestCommonSubsequence(string s, string t)
{
    vector<vector<int>> v(s.length() + 1, vector<int>(t.length() + 1, 0));
    return lcs(v, s, t);
}

int main()
{
    cout<<longestCommonSubsequence("abcde","ace");
    return 0;
}


