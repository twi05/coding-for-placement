#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> dfs(vector<vector<int>> &graph, string &labels, int i, vector<int> &ans, vector<int> &vis)
{
    vector<int> ct(26, 0);
    if (vis[i])
        return ct;
    vis[i] = 1;
    ct[labels[i] - 'a']++;
    for (int j : graph[i])
    {
        vector<int> temp = dfs(graph, labels, j, ans, vis);
        for (int k = 0; k < 26; k++)
            ct[k] += temp[k];
    }
    ans[i] = ct[labels[i] - 'a'];
    return ct;
}
vector<int> countSubTrees(int n, vector<vector<int>> &edges, string labels)
{
    vector<vector<int>> graph(n);
    for (vector<int> i : edges)
    {
        graph[i[0]].push_back(i[1]);
        graph[i[1]].push_back(i[0]);
    }
    vector<int> vis(n, false);
    vector<int> ans(n, 0);
    dfs(graph, labels, 0, ans, vis);
    return ans;
}
int main()
{

    return 0;
}