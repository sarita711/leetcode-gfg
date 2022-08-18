class Solution {
public:
    int dp[450];
    int solve(vector<int>& nums,int n)
    {
        if(n<0)return 0;
        if(n==0) return nums[0];
        if(dp[n]!=-1) return dp[n];
        int incl=solve(nums,n-2)+nums[n];
        int excl=solve(nums,n-1)+0;
        dp[n]=max(incl,excl);
        return dp[n];

    
    
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int n=nums.size();
   
    return solve(nums,n-1);
        
    }
};