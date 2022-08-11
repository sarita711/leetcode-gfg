class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        
        
        int x=nums.size();
        
        
        vector<int>v;
        map<int,int>m;
        for(int i=0;i<nums[0].size();++i)
        {
            m[nums[0][i]]++;

        
        
        }
        for(int i=1;i<x;++i)
        {

            int x1=nums[i].size();
            map<int,int>m1;
           
            for(int j=0;j<x1;++j)
            {

              m1[nums[i][j]]++;
            
            
            
            }
            for(int j=0;j<nums[0].size();++j)
            {
               if(m1[nums[0][j]]==0)
               {
                   m[nums[0][j]]=0;
               }
            
            
            
            
            }
           for(int j=0;j<nums[i].size();++j)
            {
               if(m[nums[i][j]]==0)
               {
                   m1[nums[i][j]]==0;
               }
            
            }
           
        
        
        
        }
        
        for(int i=0;i<nums[0].size();++i)
        {
            if(m[nums[0][i]]!=0)
            {
                v.push_back(nums[0][i]);
            }

        
        }
        sort(v.begin(),v.end());
        return v;
    }
};