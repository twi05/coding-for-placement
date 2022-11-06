#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    map<string, vector<string>> m;
    string t;
    for (auto s : strs)
    {
        t = s;
        sort(t.begin(), t.end());

        m[t].push_back(s);
    }
    vector<vector<string>>res;
    for(auto p: m)
    {
        res.push_back(p.second);
    }

return res;
}
int main()
{

    return 0;
}