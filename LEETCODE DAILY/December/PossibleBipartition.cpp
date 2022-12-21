#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool possibleBipartition(int n, vector<vector<int>> &dislikes)
{
    vector<int> adj[n + 1];
    for (int i = 0; i < dislikes.size(); i++)
    {
        adj[dislikes[i][0]].push_back(dislikes[i][1]);
        adj[dislikes[i][1]].push_back(dislikes[i][0]);
    }
    vector<int> color(n + 1, -1);
    for (int i = 1; i <= n; i++)
    {
        if (color[i] == -1)
        {
            color[i] = 1;
            queue<int> q;
            q.push(i);
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                for (auto it : adj[node])
                {
                    if (color[it] == -1)
                    {
                        color[it] = 1 - color[node];
                        q.push(it);
                    }
                    else if (color[it] == color[node])
                        return false;
                }
            }
        }
    }
    return true;
}

bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        if(N == 1) return true;
        unordered_map<int, int> g;
        deque<vector<int>> con (dislikes.begin(), dislikes.end());
        g[con.front()[0]] = 1;
        g[con.front()[1]] = 2;
        con.pop_front();
        while(!con.empty()){
            vector<int> temp = con.front();
            con.pop_front();
            if(g.find(temp[0]) == g.end() && g.find(temp[1]) == g.end()){
                con.push_back(temp);
            }
            else if(g.find(temp[0]) == g.end() && g.find(temp[1]) != g.end()){
                g[temp[0]] = g[temp[1]] == 1 ? 2 : 1; 
            }
            else if(g.find(temp[0]) != g.end() && g.find(temp[1]) == g.end()){
                g[temp[1]] = g[temp[0]] == 1 ? 2 : 1; 
            }
            else{
                if(g[temp[0]] == g[temp[1]]) {
                    return false;
                }
            }
        }
        return true;
    }
int main(){

return 0;
}