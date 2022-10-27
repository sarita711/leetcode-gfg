class Solution {
public:
    int solve(vector<int>&arr,map<pair<int,int>,int>&maxi,int left,int right,vector<vector<int>>&dp)
    {
        if(left==right)
        {
            return 0;
        }
        
        int ans=INT_MAX;
        if(dp[left][right]!=-1)
        {
            return dp[left][right];
        }
        for(int i=left;i<right;i++)
        {
            ans=min(ans,maxi[{left,i}]*maxi[{i+1,right}]+solve(arr,maxi,left,i,dp)+solve(arr,maxi,i+1,right,dp));
        }
        return dp[left][right]=ans;
    }
    int mctFromLeafValues(vector<int>& arr) {
        int x=arr.size();
        map<pair<int,int>,int>maxi;
        vector<vector<int>> dp(x+1,vector<int>(x+1,-1));
        
        
        for(int i=0;i<x;i++)
        {
            maxi[{i,i}]=arr[i];
             for(int j=i+1;j<arr.size();j++)
             {
                 maxi[{i,j}]=max(arr[j],maxi[{i,j-1}]);
                 
             }

        
        
        }
        
        return solve(arr,maxi,0,x-1,dp);
    }
};