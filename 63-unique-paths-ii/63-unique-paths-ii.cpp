class Solution {
public:
    int dp[101][101];
    int solve(vector<vector<int>>& od,int m,int n,int i,int j)
    {
         if(od[m-1][n-1]==1)return 0;
         if(i==m-1 && j==n-1)return 1;
         if(dp[i][j]!=-1)return dp[i][j];
         
         if(od[i][j]==1)return dp[i][j]=0;
         if(i==m-1)
         {
             return dp[i][j]=solve(od,m,n,m-1,j+1);
         }
         if(j==n-1)
         {
             return dp[i][j]=solve(od,m,n,i+1,n-1);
         }
        return dp[i][j]=solve(od,m,n,i+1,j)+solve(od,m,n,i,j+1);
    
    
    
    }
    int uniquePathsWithObstacles(vector<vector<int>>& od) {
        
        memset(dp,-1,sizeof(dp));
        int m=od.size();
        int n=od[0].size();
        return solve(od,m,n,0,0);
        
        
    }
};