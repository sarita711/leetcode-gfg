class Solution {
public:
int solve(vector<int>& days, vector<int>& costs,int index,int n,vector<int>&dp)
    {
         if(n<=index)return 0;
          
        if(dp[index]!=-1)return dp[index];
         int option1=costs[0]+solve(days,costs, index+1,n,dp);
        int i;
         for( i=index;i<n && days[i]<days[index]+7 ;++i);
        
         int option2=costs[1]+solve(days,costs,i,n,dp);
         
         for( i=index;i<n && days[i]<days[index]+30 ;++i);
         
         int option3=costs[2]+solve(days,costs,i,n,dp);
         
    
         return dp[index]=min(option1,min(option2,option3));
    
    
    
    }
   int mincostTickets(vector<int>& days, vector<int>& costs) {
       int n=days.size();
       vector<int>dp(n+1,-1);
        return solve(days,costs,0,n,dp);
    }
};