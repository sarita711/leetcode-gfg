class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int x=ranges.size();
        
        map<int,int>m;
        
        for(int i=0;i<x;i++)
        {
            int lef=ranges[i][0];
            int righ=ranges[i][1];
            
            for(int j=lef;j<=righ;++j)
            {
               m[j]++;
            }

        }
        for(int i=left;i<=right;i++ )
        {
            if(m[i]==0)
            {
                return false;
            }
        
        }
        return true;
    }
};