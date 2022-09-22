class Solution {
public:
    int dp[200][200];
    int solve(vector<vector<int>>& grid,int i,int j,int m,int n)
    {

       
        
        if(i==m && j==n)
        {
            return grid[i][j];
        }
        if(dp[i][j]!=-1)return dp[i][j];
        if(i<m && j<n)
        {
            return dp[i][j]=grid[i][j]+min(solve(grid,i+1,j,m,n),solve(grid,i,j+1,m,n));

        }
        if(i==m && j<n)
        {
            return dp[i][j]=grid[i][j]+solve(grid,i,j+1,m,n);
        }
         if(i<m && j==n)
        {
            return dp[i][j]=grid[i][j]+solve(grid,i+1,j,m,n);
        }
        return 0;
    
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return solve(grid,0,0,grid.size()-1,grid[0].size()-1);
        

    }
};