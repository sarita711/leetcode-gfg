class Solution {
public:
    int findCenter(vector<vector<int>>& ed) {
      
        int x=ed.size();
        int x1=ed[0].size();
        
         map<int,int>m1;
         map<int,int>m2;
        
         map<int,int>m;
        for(int i=0;i<x;++i)
        {

           m[ed[i][0]]++;
           m[ed[i][1]]++;
        
        }
        for(int i=0;i<x;++i)
        {
            if(m[ed[i][0]]>1)
            {
                
             return ed[i][0];
            }
            if(m[ed[i][1]]>1)
            {
               return ed[i][1]; 
                
            }
        }
        
        return 0;
        
    }
};