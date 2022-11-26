#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void printPaths(vector<int> path)
{
    for (int i = 0; i < path.size(); i++)
        cout << " " << path[i];
    cout << " " << path[0];
    cout << endl;
}

bool isSafe(vector<vector<bool>> graph, vector<int> &path, int pos, int i)
{
    if (graph[path[pos - 1]][i] == false)
        return false;

    for (int j = 0; j < pos; j++)
    {
        if (path[j] == i)
            return false;
    }
    return true;
}

bool hamUtil(vector<vector<bool>> graph, vector<int> &path, int pos)
{
    if (pos == graph.size())
    {
        if (graph[path[pos - 1]][path[0]] == 1)
        {
            printPaths(path);
            return true;
        }
        else
            return false;
    }

    for (int i = 1; i < graph.size(); i++)
    {

        if (isSafe(graph, path, pos, i))
        {
            path[pos] = i;

            if (hamUtil(graph, path, pos + 1) == true)
            {
                return true;
            }
            path[pos] = -1;
        }
    }
    return false;
}

bool hamCycle(vector<vector<bool>> graph)
{
    vector<int> path(graph.size(), -1);
    path[0] = 0;
    if (hamUtil(graph, path, 1) == false)
    {

        cout << "Hamiltonian Cycle doesnt exist";
        return false;
    }
    // printPaths(path);

    return true;
}
int main()
{
    vector<vector<bool>> graph1 = {
            { 0, 1, 1, 0, 0, 1 },
            { 1, 0, 1, 0, 1, 1 },
            { 1, 1, 0, 1, 0, 0 },
            { 0, 0, 1, 0, 1, 0 },
            { 0, 1, 0, 1, 0, 1 },
            { 1, 1, 0, 0, 1, 0 },
        };

    hamCycle(graph1);

    return 0;
}
