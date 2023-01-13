class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int x=nums.size();
        int ans=0;
        
        for(int i=0;i<x;i++)
        {
            for(int j=i+1;j<x;j++)
            {
                if(nums[i]!=nums[j]){
                for(int k=j+1;k<x;k++)
                {
                    if(nums[j]!=nums[k] && nums[i]!=nums[k])
                    {
                         ans++;
                    }

                }
                }
            }

        
        }
        return ans;
    }
};