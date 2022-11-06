#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string ans;
    vector<char> v1(26);
    vector<char> v2(26);
    unordered_map<char, char> m;
    for (int i = 0; i < 26; i++)
        cin >> v1[i];
    for (int i = 0; i < 26; i++)
        cin >> v2[i];

    for (int i = 0; i < 26; i++)
        m[v1[i]] = v2[i];

    cin >> s;
    for (int i = 0; s[i]; i++)
    {

        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            ans += m[char(s[i] + 32)];
            int ind = ans.size()-1;
            ans[ind] = char(ans[ind] - 32);
        }

        else if (s[i] >= 'a' && s[i] <= 'z')
            ans += m[s[i]];

        else
            ans += s[i];
    }

    cout << ans;

    return 0;
}