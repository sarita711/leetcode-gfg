class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int mx=abs(nums[0]-0);
        int ans=nums[0];
        for(int i=0;i<nums.size();++i)
        {
            
            if(mx>=abs(nums[i]-0))
            {
                mx=abs(nums[i]-0);
                ans=nums[i];

            }
        }
        return ans;
    }
};