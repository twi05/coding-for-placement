#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<pair<int, int>> dirs = {{-1, 0}, {0, 1}, {0, -1}, {1, 0}};
void dfs(vector<vector<int>> &grid, vector<vector<bool>> &visited, int sx, int sy, int tx, int ty, int &res, int todo)
{
    if (sx < 0 || sx >= grid.size() || sy < 0 || sy >= grid[0].size() || visited[sx][sy] || grid[sx][sy] < 0)
        return;
    todo--;
    visited[sx][sy] = true;
    if (sx == tx && sy == ty && !todo)
        res++;
    for (auto dir : dirs)
    {
        dfs(grid, visited, dir.first + sx, dir.second + sy, tx, ty, res, todo);
    }
    visited[sx][sy] = false;
}

int uniquePathsIII(vector<vector<int>> &grid)
{
    if (!grid.size() || !grid[0].size())
        return 0;
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n));
    int res = 0;
    int sx, sy, tx, ty;
    int todo = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] >= 0)
                todo++;
            if (grid[i][j] == 1)
            {
                sx = i;
                sy = j;
            }
            else if (grid[i][j] == 2)
            {
                tx = i;
                ty = j;
            }
        }
    dfs(grid, visited, sx, sy, tx, ty, res, todo);
    return res;
}







    vector<vector<int> > mat;
    int m,n;
    int x[4]={-1,0,1,0};
    int y[4]={0,1,0,-1};
    int dfs(int i,int j,vector<vector<int> > &vis,int tot,int re){
        if(mat[i][j]==2 && tot==re) {
            return 1;
        }
        if(mat[i][j]==-1) return 0;
        vis[i][j]=1;
        int ans=0;
        for(int dir=0;dir<4;dir++){
            int xd=i+x[dir];
            int yd=j+y[dir];
            if(xd>=0 && yd>=0 && xd<=m-1 && yd<=n-1){
                if(!vis[xd][yd]){
                    if(mat[xd][yd]==0){
                        tot++;
                    }
                    ans+=dfs(xd,yd,vis,tot,re);
                    if(mat[xd][yd]==0){
                        tot--;
                    }
                }
            }
        }
        vis[i][j]=0;
        return ans;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        m=grid.size();
        if(m==0) return 0;
        n=grid[0].size();
        mat=grid;
        int x,y;
        vector<vector<int> > vis;
        vis.resize(m,vector<int>(n,0));
        int re=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    x=i;
                    y=j;
                    
                }
                if(mat[i][j]==0){
                    re++;
                }
            }
        }
        return dfs(x,y,vis,0,re);
    }


int main()
{

    return 0;
}