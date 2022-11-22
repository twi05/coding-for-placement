#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



    bool valid(vector<vector<char>> &maze, int row, int col)
    {
        int m = maze.size(), n = maze[0].size();
        if (row < 0 || row == m || col < 0 || col == n || maze[row][col] == '+')
            return false;
        else
            return true;
    }
    int nearestExit(vector<vector<char>> &maze, vector<int> &entrance)
    {
        queue<pair<int, int>> q;

        int x = entrance[0];
        int y = entrance[1];

        q.push({x, y});
        maze[x][y] = '+';
        int steps = 0;
        bool gotSolution = false;
        while (q.size() > 0)
        {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                if (x == 0 || y == 0 || x == maze.size() - 1 || y == maze[0].size() - 1)
                {
                    if (x != entrance[0] && y != entrance[1])
                    {
                        gotSolution = true;
                        break;
                    }
                }

                if (valid(maze, x - 1, y))
                {
                    q.push({x - 1, y});
                    maze[x - 1][y] = '+';
                }

                if (valid(maze, x + 1, y))
                {
                    q.push({x + 1, y});
                    maze[x + 1][y] = '+';
                }

                if (valid(maze, x, y - 1))
                {
                    q.push({x, y - 1});
                    maze[x][y - 1] = '+';
                }

                if (valid(maze, x, y + 1))
                {
                    q.push({x, y + 1});
                    maze[x][y + 1] = '+';
                }
            }
            if (gotSolution)
                break;
            steps += 1;
        }
        if (gotSolution)
            return steps;
        else
            return -1;
    }
    int main()
{
    vector<vector<char>> maze = {{'+', '+', '.', '+'}, {'.', '.', '.', '+'}, {'+', '+', '+', '.'}};
    vector<int> entrance = {1, 2};

    cout<<nearestExit(maze,entrance);

    return 0;
}




//////////////////////////////////////////////////

class Solution
{
public:
    int nearestExit(vector<vector<char>> &maze, vector<int> &entrance)
    {
        int m = maze[0].size(), n = maze.size();
        queue<pair<int, int>> q;

        q.push({entrance[0], entrance[1]});
        maze[entrance[0]][entrance[1]] = '+';
        int level = 0;
        int dr[4] = {1, -1, 0, 0};
        int dc[4] = {0, 0, -1, 1};

        while (!q.empty())
        {
            int size = q.size();
            level++;
            for (int i = 0; i < size; i++)
            {
                auto x = q.front();
                q.pop();
                int row = x.first;
                int col = x.second;
                for (int j = 0; j < 4; j++)
                {
                    int new_row = row + dr[j];
                    int new_col = col + dc[j];
                    if (new_row >= 0 && new_col >= 0 && new_row < n && new_col < m)
                    {

                        if (maze[new_row][new_col] == '+')
                        {
                            continue;
                        }

                        if (new_row == 0 or new_col == 0 or new_row == n - 1 or new_col == m - 1)
                        {
                            return level;
                        }
                        q.push({new_row, new_col});
                        maze[new_row][new_col] = '+';
                    }
                }
            }
        }

        return -1;
    }
};