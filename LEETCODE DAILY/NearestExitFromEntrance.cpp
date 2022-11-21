#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    return 0;
}

class Solution
{
public:
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
                if (x == 0 || y == 0 || x == maze.size() || y == maze[0].size())
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
};