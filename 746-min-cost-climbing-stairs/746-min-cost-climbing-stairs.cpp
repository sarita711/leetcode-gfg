class Solution {
public:
     int dp[1001];
    int solve(int i,vector<int>&cost)
    {
        if(i==0) {
         
            return cost[0];
        }
        if(i==1)
        {
           
            return cost[1];
            
        }
        if(i<0) return 0;
       if(dp[i]!=-1)return dp[i];
       return dp[i]=cost[i]+min(solve(i-1,cost),solve(i-2,cost));
        
        

    }
     int solve2(int i,vector<int>&cost)
    {
        if(i==0) {
         
            return cost[0];
        }
        if(i==1)
        {
           
            return cost[1];
            
        }
        if(i<0) return 0;
       if(dp[i]!=-1)return dp[i];
       dp[i]=cost[i]+min(solve(i-1,cost),solve(i-2,cost));
         return dp[i];
        
        }

    
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
       return min(solve2(cost.size()-2,cost),solve2(cost.size()-1,cost));
    }
};                  