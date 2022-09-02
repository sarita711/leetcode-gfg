class Solution {
public:
    /* int solve(int start,int end,vector<vector<int>>&dp)
    {
        if(start>=end)
            return 0;
         if(dp[start][end]!=-1)return dp[start][end];
        int maxi=INT_MAX;
        
        for(int i=start;i<=end;++i)
        {

            maxi=min(maxi,i+max(solve(start,i-1,dp),solve(i+1,end,dp)));
        
        }
        return dp[start][end]=maxi;
        
        
    }*/
    
    int solvetab(int n)
    {
         vector<vector<int>>dp(n+2,vector<int>(n+2,0));
        
         for(int start=n;start>=1;start--)
            {
                for(int end=start;end<=n;end++)
                {
                      if(start==end)
                      {
                          continue;
                      }
                      else{
                          int maxi=INT_MAX;
                          for(int i=start;i<=end;i++)
                          {
                maxi=min(maxi,i+max(dp[start][i-1],dp[i+1][end]));
                          
                          
                          }
                          
                           dp[start][end]=maxi;
                          
                      }
                
                
                }
            }
        return dp[1][n];
    
    }
    int getMoneyAmount(int n) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
       //return solve(1,n,dp);
        return solvetab(n);
        
    }
};