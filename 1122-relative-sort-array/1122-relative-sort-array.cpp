class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int x1=arr1.size();
        int x2=arr2.size();
        vector<int>v;
        map<int,int>m1;
        for(int i=0;i<x1;++i)
        {
            
            m1[arr1[i]]++;
            
         }
        
         for(int i=0;i<x2;++i)
         {
             int x=m1[arr2[i]];
             while(x>0)
             {
                 v.push_back (arr2[i]);
                 m1[arr2[i]]--;
                 x--;
             }
         }
          sort(arr1.begin(),arr1.end()) ;
         for(int i=0;i<x1;++i)
         {
             if(m1[arr1[i]]!=0)
             {
                 v.push_back (arr1[i]);
             }
                
         }
        return v;
        
    }
};