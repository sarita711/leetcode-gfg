class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int sum=0;
        
        int x=nums.size();
        for(int i=0;i<x;++i)
        {

            nums[i]=nums[i]+sum;
            sum=nums[i];

        
        }
        
        
        return nums;
        
    }
};