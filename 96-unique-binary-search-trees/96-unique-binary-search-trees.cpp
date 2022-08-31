class Solution {
public:
    int solve(int n,vector<int>&dp)
    {

     if(n<=1)return 1;
        int ans=0;
        if(dp[n]!=-1)return dp[n];
        
        //think i as root node
        for(int i=1;i<=n;++i)
        {

          ans+=solve(i-1,dp)*solve(n-i,dp);
        
        }
        return dp[n]=ans;
    }
    int solvetab(int n)
    {
        vector<int>dp(n+1,0);
        dp[0]=dp[1]=1;
        
        for(int i=2;i<=n;++i)
        {
            for(int j=1;j<=i;++j)
            {
                
                dp[i]+=dp[j-1]*dp[i-j];
            }
            
            
            
        }
        return dp[n];
        
    }
    int numTrees(int n) {
        
       vector<int>dp(n+1,-1);
        
        //return solve(n,dp);
        return solvetab(n);
        
    }
};