class Solution {
public:
    long long int dp[101][101];
    int solve(int m,int n,int i,int j)
    {
         if(i==m-1 && j==n-1)
         {
             return 1;
         }
         if(i>=n && j>=m )
         {
             return 0;
         }
        if(i<m && j<n){
        if(dp[i][j]!=-1)return dp[i][j];}
         if(j==n-1)
         {
             
             return dp[i][j]=solve(m,n,i+1,n-1);
         }
          if(i==m-1)
         {
             
             return dp[i][j]=solve(m,n,m-1,j+1);
         }
        
        
        return dp[i][j]=solve(m,n,i,j+1)+solve(m,n,i+1,j);
        
    
    }
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return solve(m,n,0,0);
    }
};