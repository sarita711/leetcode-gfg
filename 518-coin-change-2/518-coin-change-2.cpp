/*class Solution {
public:
    
    int dp[10010];
    
    int fun(int a,int j,vector<int>& c)
    {
        
        if(a==0)return 1;
        if(j<0)return 0;
        if(c.size()==1 && a%c[0]!=0)
        {
            return 0;
        }
        if(dp[a]!=-1)return dp[a];
       
        int way1=fun(a,j-1,c);
        int way2=0;
        if((a-c[j])>=0){ way2=fun(a-c[j],j,c);}
        
    
        
        return dp[a]=way1+way2;
    }
    int change(int a,vector<int>& c) {
         memset(dp,-1,sizeof(dp));
        long long ans=fun(a,c.size()-1,c);
       
        return ans;
    
    }
};*/
class Solution {
public:
	int f(int i,int amount,vector<int>& coins,vector<vector<int>>& dp){
		if(!i){
			if(amount%coins[0]==0) return 1;
			return 0;
		}
		if(dp[i][amount]!=-1) return dp[i][amount];
		int notpick=f(i-1,amount,coins,dp);
		int pick=0;
		if(amount>=coins[i]) pick=f(i,amount-coins[i],coins,dp);
		return dp[i][amount]=pick+notpick;
	}

	int change(int amount, vector<int>& coins) {
		int n=coins.size();
		vector<vector<int>> dp(n,vector<int>(amount+1,-1));
		return f(n-1,amount,coins,dp);   
	}
};