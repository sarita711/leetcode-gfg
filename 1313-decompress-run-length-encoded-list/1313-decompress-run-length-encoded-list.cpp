class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int x=nums.size();
        vector<int>v;
        
        for(int i=1;i<x;i+=2)
        {
            for(int j=1;j<=nums[i-1];j++)
            {
                v.push_back(nums[i]);
            }
        }
          
        return v;

    }
};