class Solution {
public:
    string destCity(vector<vector<string>>& p) {
        int x=p.size();
        map<string,int>m;
        for(int i=0;i<x;++i)
        {
            m[p[i][0]]++;
        }
        for(int i=0;i<x;++i)
        {
           if(m[p[i][1]]==0)
           {
               return p[i][1];
           }
        }
       
        return p[x-1][1];
    }
};