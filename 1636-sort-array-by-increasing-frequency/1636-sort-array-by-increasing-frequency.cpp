class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int x=nums.size();
        map<int,int>m;
        vector<int>v;
        map<int,int>m2;
        for(int i=0;i<x;++i)
        {
            m[nums[i]]++;
            m2[nums[i]]++;
            
        }
        map<int,vector<int>>m1;
        
        for(int i=0;i<x;++i)
        {
              if(m[nums[i]]!=-1){
               v.push_back(m[nums[i]]);
            
            m1[m[nums[i]]].push_back(nums[i]);
                  m[nums[i]]=-1;
              }
           
         
        }
        sort(v.begin(),v.end());
        vector<int>v1;
        vector<int>::iterator itr1;
        for(itr1=v.begin();itr1!=v.end();++itr1)
        {
            vector<int>::iterator itr;
            sort(m1[*itr1].rbegin(),m1[*itr1].rend());
            itr=m1[*itr1].begin();
            while(itr!=m1[*itr1].end())
            {   
               int t=m2[*itr];
                while(t--)
                {
                    v1.push_back(*itr);
                }
                
                itr++;
            }
            m1[*itr1].clear();
          
        }
        return v1;
        
            
    }
};