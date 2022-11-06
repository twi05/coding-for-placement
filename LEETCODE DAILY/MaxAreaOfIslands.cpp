
    void dfs(vector<vector<int>> grid, int i, int j, int &count)
    {
        if (i < 0 || j >= grid[0].size() || grid[i][j] == 0 || i>=grid.size() || j < 0)
        {
            return;
        }
        count++;
        dfs(grid, i - 1, j, count);
        dfs(grid, i + 1, j, count);
        dfs(grid, i, j - 1, count);
        dfs(grid, i, j + 1, count);
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int count = 0;
        int maxcount = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                dfs(grid, i, j, count);
                maxcount = max(count, maxcount);
                count = 0;
            }
        }
        return maxcount;
    }
