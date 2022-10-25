class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int x1=mat.size();
        int x2=mat[0].size();
        int r=0;
        for(int i=0;i<x1;++i)
        {
            for(int j=0;j<x2;++j)
            {

                if(mat[i][j]==1)
                {
                     int ans1=0;
                    int ans2=0;
                    for(int k=0;k<x1;++k)
                    {
                       if(mat[k][j]==1)
                       {
                           ans1++;

                       }
                    }
                     for(int k=0;k<x2;++k)
                    {
                       if(mat[i][k]==1)
                       {
                           ans2++;

                       }
                    }
                    if(ans1==1 && ans2==1 )
                    {
                      r++;
                    }
                    
                }
            
            }
            
            
        }
        return r;
    }
};