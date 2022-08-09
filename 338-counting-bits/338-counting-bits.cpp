class Solution {
public:
    int dp[100100];
    int v1(int n)
    {
        int ans=0;
        if(dp[n]!=-1)return dp[n];
        while(n>0)
        {
            
                
                if(n%2!=0)
                {
                    ans++;
                    
                }
                n=n/2;
            
            
            
        }
        
        return ans;
        
        
    }
    vector<int> countBits(int n) {
        memset(dp,-1,sizeof(dp));
        vector<int>v;
        for(int i=0;i<=n;++i)
        {
            if(dp[i]!=-1)
            {
               v.push_back(dp[i]);
            }
            else{

            dp[i]=v1(i);
                v.push_back(dp[i]);
                
            
            }
    
            
            
            
        }
        
        
        return v;
    }
};