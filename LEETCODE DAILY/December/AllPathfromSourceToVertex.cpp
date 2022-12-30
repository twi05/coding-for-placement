#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void helper(vector<vector<int>> &res, vector<int> ans, vector<vector<int>> graph, int ind)
{
    if(ind==graph.size()-1)
    {
        ans.push_back(graph.size()-1);
        res.push_back(ans);
    }

    for(int i=0;i<graph[ind].size();i++)
    {
        ans.push_back(ind);
        helper(res, ans, graph, graph[ind][i]);
        ans.pop_back();
    }

}
vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
{

    vector<vector<int>> res;
    vector<int> ans;
    
    helper(res, ans, graph, 0);
    return res;
}

int main()
{

    return 0;
}