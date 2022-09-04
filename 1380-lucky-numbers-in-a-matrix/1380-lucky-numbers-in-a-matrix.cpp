class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& m) {
       
        int x=m.size();
        int x1=m[0].size();
        vector<int>v;
        for(int i=0;i<x;++i)
        {
            for(int j=0;j<x1;++j)
            {
                
                int k=m[i][j];
                
                bool val1=false;
                bool val2=false;
                
                for(int k1=0;k1<x1;++k1)
                {
                    if(m[i][k1]<k)
                    {
                        val1=true;
                    }
                   
                }
                 for(int k1=0;k1<x;++k1)
                {
                    if(m[k1][j]>k)
                    {
                        val1=true;
                    }
                   
                }
                
                if(val1==false && val2==false)
                {
                    v.push_back(m[i][j]);
                }
                
            }
            
            
        }
        return v;
        
    }
};