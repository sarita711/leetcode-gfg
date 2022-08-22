class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        
       
        int mn1=1000000;
        for(int i=0;i<nums.size();++i)
        {
            if(target==nums[i])
            {
                mn1=min(mn1,abs(i-start));
            }
            
        }
       /* int mn2=1000000;
         for(int i=0;i<=start;++i)
        {
            if(target==nums[i])
            {
                mn2=min(mn2,abs(i-start));
            }
            
        }
      
        return min(mn1,mn2);*/return mn1;
   }
};