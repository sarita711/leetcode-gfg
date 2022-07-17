class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        int x=nums.size();
        
        map<int,int>m;
        for(int i=0;i<x;++i)
        {

     
             m[nums[i]]++;

        }
        for(int i=0;i<x;++i)
        {
            if(m[nums[i]]==x/2)
            {
               return nums[i];
            }
        }
        return 0;
    }
};