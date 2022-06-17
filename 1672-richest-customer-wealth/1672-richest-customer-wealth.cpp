class Solution {
public:
    int maximumWealth(vector<vector<int>>& ac) {
      
        int mx=0;
        
        int x1=ac.size();
        int x2=ac[0].size();
        
        for(int i=0;i<x1;++i)
        {
            int sum=0;
            for(int j=0;j<x2;++j)
            {


              sum+=ac[i][j];
   
            }
            
mx=max(mx,sum);
            
     
        }
        
        
        
        
        
        
        return mx;
        
    }
};