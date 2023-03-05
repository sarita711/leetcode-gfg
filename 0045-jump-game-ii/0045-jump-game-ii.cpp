class Solution {
public:
    int v[10001];
    int solve(vector<int>&nums,int i,int x)
    {  
        if(i>=x-1)return 0;
        if(v[i]!=-1)return v[i];
        if(i<x)
        {
            int temp=nums[i];
            int mi=INT_MAX;
            while(temp>0)
            {
                mi=min(mi,(1+solve(nums,i+temp,x)%1000000007));
                temp--;
            }
            v[i]=mi;
            return v[i];
            
        }
        return 0;
        
    }
    int jump(vector<int>& nums) {
      int x=nums.size();
        for(int i=0;i<x;i++)
        {
            v[i]=-1;
        }
      
      return solve(nums,0,x);
      
    }
};