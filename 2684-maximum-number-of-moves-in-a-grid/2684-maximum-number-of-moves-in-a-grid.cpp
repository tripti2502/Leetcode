class Solution {
      int func(int i,int j,vector<vector<int>>& grid,vector<vector<int>> &dp){
          if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())
             return 0;
              if(dp[i][j]!=-1) return dp[i][j];
          int upD=0,right=0,dd=0;
            if( i-1>=0 && i-1<grid.size() && j+1>=0 && j+1<grid[0].size() ){
                if(grid[i-1][j+1]>grid[i][j])
                upD=1+func(i-1,j+1,grid,dp);
            }
          if(i>=0 && i<grid.size() && j+1>=0 && j+1<grid[0].size() ){
                if(grid[i][j+1]>grid[i][j]) right=1+func(i,j+1,grid,dp);
            }
          if(i+1>=0 && i+1<grid.size() && j+1>=0 && j+1<grid[0].size() ){
               if(grid[i+1][j+1]>grid[i][j]) dd=1+func(i+1,j+1,grid,dp);
            }
          
          
          return dp[i][j]=max(upD,max(dd,right));
          
          
          
          
          }
public:
    int maxMoves(vector<vector<int>>& grid) {
        int ans=0;
        vector<vector<int>> dp(grid.size(),vector<int> (grid[0].size(),-1));
        for(int i=0;i<grid.size();i++){
            ans=max(ans,func(i,0,grid,dp));
        }
        return ans;
    }
};
        
            
          
