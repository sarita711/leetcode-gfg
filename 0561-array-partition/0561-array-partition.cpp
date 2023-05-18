class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int ans=0;
        int mx =-1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=2)
        {
            ans+=min(nums[i],nums[i-1]);
            
        }
        return ans;
    }
};