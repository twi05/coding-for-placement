#include <bits/stdc++.h>
using namespace std;

bool hasCycle;
bool isSafe(int v, vector<vector<int>>graph, vector<int> path, int pos)
{
    if (graph[path[pos - 1]][v] == 0)
        return false;

    for (int i = 0; i < pos; i++)
        if (path[i] == v)
            return false;

    return true;
}

void FindHamCycle(vector<vector<int>>graph, int pos, vector<int> path, bool visited[], int N)
{
    if (pos == N)
    {

        if (graph[path[path.size() - 1]][path[0]] != 0)
        {

            path.push_back(0);
            for (int i = 0; i < path.size(); i++)
            {
                cout << path[i] << " ";
            }
            cout << endl;

            path.pop_back();

            hasCycle = true;
        }
        return;
    }


    for (int v = 0; v < N; v++)
    {

        if (isSafe(v, graph, path, pos) && !visited[v])
        {

            path.push_back(v);
            visited[v] = true;

            FindHamCycle(graph, pos + 1, path, visited, N);

            visited[v] = false;
            path.pop_back();
        }
    }
}

void hamCycle(vector<vector<int>>graph, int N)
{

    hasCycle = false;
    vector<int> path;
    path.push_back(0);

    bool visited[N];

    for (int i = 0; i < N; i++)
        visited[i] = false;

    visited[0] = true;

    FindHamCycle(graph, 1, path, visited, N);

    if (!hasCycle)
    {
        cout << "No Hamiltonian Cycle"
             << "possible " << endl;
        return;
    }
}

int main()
{
    vector<vector<int>>graph = {
        {0, 1, 1, 0, 0, 1},
        {1, 0, 1, 0, 1, 1},
        {1, 1, 0, 1, 0, 0},
        {0, 0, 1, 0, 1, 0},

    };
    hamCycle(graph, 6);

    return 0;
}