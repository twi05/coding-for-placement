#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void createAM(vector<vector<bool>> &am, vector<vector<int>> &edges)
{
    for (vector<int> v : edges)
    {
        am[v[0]][v[1]] = true;
        am[v[1]][v[0]] = true;
    }
}


bool dfs(int curr, int des, vector<vector<bool>> am, vector<int> &visited)
{

    if (curr == des)
        return true;

    for (int i = 0; i < am.size(); i++)
    {
        cout << "\n i->" << i;
        if (am[curr][i])
        {
            if (visited[i] == 1)
                continue;
            visited[i] = 1;
            cout << "Find curr: " << i;
            if (dfs(i, des, am, visited))
                return true;

            visited[i] = -1;
        }
    }
    return false;
}

bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
{
    vector<vector<bool>> am(n, vector<bool>(n, false));
    createAM(am, edges);
    
    vector<int> visited(n, -1);
    visited[source] = 1;
    for (vector<bool> v : am)
    {
        for (bool v2 : v)
        {
            cout << v2 << " ";
        }
        cout << endl;
    }
    return dfs(source, destination, am, visited);
}
int main()
{
    int n = 6;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {2, 4}, {0, 3}, {3, 5}};
    int source = 0, destination = 5;
    cout << "ans: " << validPath(n, edges, source, destination);
    // int n = 3;
    // vector<vector<int>> edges = {{0, 1}, {1, 0}, {2, 0}};
    // int source = 0, destination = 2;
    // cout << "ans: " << validPath(n, edges, source, destination);
    return 0;
}

bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
{

    unordered_map<int, vector<int>> hash;
    queue<int> q;
    q.push(source);
    vector<int> visited(n, false);
    for (auto &edge : edges)
    {
        hash[edge[0]].push_back(edge[1]);
        hash[edge[1]].push_back(edge[0]);
    }

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        if (curr == destination)
            return true;
        
        for(auto& ele: hash[curr])
        {
            if(!visited[ele])
            {
                q.push(ele);
                visited[ele] = true;
            }
        }


    }
    return false;
}