class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
       
        vector<int>v;
        
        int x=mat.size();
        int y=mat[0].size();
        
        
        for(int i=0;i<x;++i)
        {
               for(int j=0;j<y;++j)
               {
                    v.push_back (mat[i][j]);
          
                }
   
           }
        
        
        sort(v.begin(),v.end());
        
        int i=0;
        
        vector<int>::iterator itr;
        
         for(itr=v.begin();itr!=v.end();++itr)
         {


             if(k==1)
             {


return *itr;


}
k--;
        
         
         }
        
        
        
        return 0;
        
    }
};