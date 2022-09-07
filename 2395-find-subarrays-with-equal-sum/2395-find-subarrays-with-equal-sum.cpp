class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        
        map<int,int>m;
        
        int x=nums.size();
        for(int i=1;i<x;++i)
        {
                 if(m[nums[i]+nums[i-1]]!=0)
                   {

                       return true;
                   }
                
                m[nums[i]+nums[i-1]]++;
                
            
        
        }
        return false;
    }
};