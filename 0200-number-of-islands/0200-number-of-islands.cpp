class Solution
{
private:
    void bfs(int row, int col, vector<vector<int>> &visited, vector<vector<char>> &grid, int delta_row[], int delta_col[])
    {
        int n = grid.size();
        int m = grid[0].size();

        visited[row][col] = 1;
        queue<pair<int, int>> q;
        q.push({row, col});

        while (!q.empty())
        {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            
            for (int i = 0; i < 4; i++)
            {
                int neighbour_row = r + delta_row[i];
                int neighbour_col = c + delta_col[i];

                // for each neighbour check boundary
                if (neighbour_row >= 0 && neighbour_row < n && neighbour_col >= 0 && neighbour_col < m)
                {
                    // check for land and prev visited
                    if (grid[neighbour_row][neighbour_col] == '1' && !visited[neighbour_row][neighbour_col])
                    {
                        visited[neighbour_row][neighbour_col] = 1;
                        q.push({neighbour_row, neighbour_col});
                    }
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int ans = 0;
        int delta_row[] = {-1, 0, 1, 0};
        int delta_col[] = {0, 1, 0, -1};

        for (int r = 0; r < n; r++)
            for (int c = 0; c < m; c++)
                if (!visited[r][c] && grid[r][c] == '1')
                {
                    ++ans;
                    bfs(r, c, visited, grid, delta_row, delta_col);
                }

        return ans;
    }
};
// class Solution {
//     private:
//     void bfs(int row, int col, vector<vector<int>>&vis,vector<vector<char>>& grid, int del_row[], int del_col[]){
//         vis[row][col]=1;
//         queue<pair<int,int>>q;
//         q.push({row, col});
//         int n=grid.size();
//         int m=grid[0].size();
//         while(!q.empty()){
//              int row=q.front().first;
//              int col=q.front().second;
//              q.pop();
//              //for 8 direction
//     //          //traverse in the neighbour and mark them if it is land
//     //          for(int delrow=1; delrow<=n; delrow++){
//     //              for(int delcol=1; delcol<=m; delcol++){
//     //                  int nrow=row+delrow;
//     //                  int ncol=col+delcol;
//     //                  if(nrow>=0 && nrow<n && ncol>=0 && ncol<m 
//     //                 && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
//     //                      vis[nrow][ncol]=1;
//     //                      q.push({nrow, ncol});
//     //                  }
//     //              }
//     //          }
//     //     }
//     // }
//             for (int i = 0; i < 4; i++)
//                 {

//                     int nrow = del_row[i] + row;
//                     int ncol = del_col[i] + col;
//                     if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && vis[nrow][ncol] == 0)
//                     {
//                         vis[nrow][ncol] = 1;
//                         q.push({ nrow,
//                             ncol });
//                     }
//                 }
//             }
//         }
    
//   public:
//     int numIslands(vector<vector<char>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         vector<vector<int>>vis(n, vector<int>(m,0));
//         int count=0;
//     //     for(int row=0; row<n; row++){
//     //         for(int col=0; col<m; col++){
//     //             if(!vis[row][col] && grid[row][col]=='1'){
//     //                 count++;
//     //                 bfs(row, col, vis, grid);
//     //             }
//     //         }
//     //     }
//     //     return count;
//     // }
//         // for four directions 
//         int del_row[] = { -1,0,1,0};
//         int del_col[] = { 0, 1, 0,-1};
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {

//                 if (vis[i][j] == 0 && grid[i][j] == '1')
//                 {
//                     int row = i;
//                     int col = j;
//                     count++;
//                     bfs(grid, row, col, vis, del_row, del_col);
//                 }
//             }
//         }
//         return count;
//     }
// };