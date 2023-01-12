#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int dfs(unordered_map<int, vector<int>> adj, int parent, int curr, vector<bool> hasApple)
{
    int time = 0;
    for (auto &child : adj[curr])
    {
        if (child == parent)
            continue;

        int time_from_child = dfs(adj, curr, child, hasApple);

        if (time_from_child > 0 || hasApple[child]==true)
            time += time_from_child + 2;
    }
    return time;
}
int minTime(int n, vector<vector<int>> &edges, vector<bool> &hasApple)
{
    unordered_map<int, vector<int>> adj;

    for (vector<int> &edge : edges)
    {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

    return dfs(adj, -1, 0, hasApple);
}

  int dfs(vector<vector<int>> &adjList, vector<bool>& hasApple, int node, int prev)
    {
        int sum = 0;
        for(int &i: adjList[node]){
            if(i != prev)
                sum += dfs(adjList, hasApple, i, node);
        }
        if(node == 0)
            return sum;
        if(hasApple[node] || sum != 0)
            return (2 + sum);
        else
            return 0;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> adjList(n);
        for(auto &e:edges){
            adjList[e[0]].push_back(e[1]);
            adjList[e[1]].push_back(e[0]);
        }
        return dfs(adjList, hasApple, 0, -1);
    }
int main()
{

    return 0;
}