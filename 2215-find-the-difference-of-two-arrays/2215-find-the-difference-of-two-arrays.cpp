
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      int x1=nums1.size() ;
        int x2=nums2.size();
        map<int,int>m1;
        map<int,int>m2;
      vector<int>v1;
      vector<int>v2;
      vector<vector<int>>v;
      for(int i=0;i<x1;++i)
      {
          
          m1[nums1[i]]++;
          
      }
      for(int i=0;i<x2;++i)
      {
          
          m2[nums2[i]]++;
        
          
      }
        
      for(int i=0;i<x1;++i)
      {
          if(m2[nums1[i]]==0 && m1[nums1[i]]!=0)
          {
            v1.push_back(nums1[i]);
              m1[nums1[i]]=0;
          
          }
      }
         
      for(int i=0;i<x2;++i)
      {
          if(m1[nums2[i]]==0 && m2[nums2[i]]!=0)
          {
            v2.push_back(nums2[i]);
          m2[nums2[i]]=0;
          }
      }
        v.push_back(v1);
        v.push_back(v2);
        return v;
    }
};