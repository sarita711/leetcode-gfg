class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int x=-1;
        
        for(int i=0;i<nums.size();++i)
        {
            for(int j=i+1;j<nums.size();++j)
            {
                if(nums[j]>nums[i])
                {
                    x=max(x,nums[j]-nums[i]);
                }
                
            }
           
        }
        return x;
    }
};