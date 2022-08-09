#include<algorithm>
class Solution {
public:
    int dp[10010];
    
    int fun(int a,vector<int>& c)
    {
        
        if(a==0)return 0;
        if(c.size()==1 && a%c[0]!=0)
        {
            return -1;
        }
        if(dp[a]!=-1)return dp[a];
       
        int ans=INT_MAX;
        for(int i=0;i<c.size();++i)
        {
            
            if(a-c[i]>=0){

           ans=min(ans+0LL,fun(a-c[i],c)+1LL);
            }
           
        }
        return dp[a]=ans;
    }
    int coinChange(vector<int>& c, int a) {
         memset(dp,-1,sizeof(dp));
        long long ans=fun(a,c);
       
        return ans==INT_MAX ? -1 : ans;
        
       
 }
};