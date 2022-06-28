class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int x=nums.size();
        map<int,int>m;
        int ans=0;
        for(int i=0;i<x;++i)
            {
                
                m[nums[i]]++;
                
                }
           for(int i=0;i<x;++i)
            {
                if(m[nums[i]]==1)
                {
                    ans+=nums[i];
                }
                
                
                }  
        return ans;    
    }
};