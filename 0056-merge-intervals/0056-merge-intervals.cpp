class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
       
        vector<vector<int>>v;
        int x=in.size();
       
        vector<int>v1;
        sort(in.begin(),in.end());
       int prev1=in[0][0];
        int prev2=in[0][1];
        for(int i=1;i<x;++i)
        {
            if(in[i][0]>=prev1 && in[i][0]<=prev2 || prev1>in[i][0]  || prev2>in[i][1])
            {
                prev2=max(in[i][1],prev2);
                prev1=min(in[i][0],prev1);
            }
            else {
                v1.push_back(prev1);
                v1.push_back(prev2);
                v.push_back(v1);
                v1.clear();
                prev1=in[i][0];
                prev2=in[i][1];
               }
        
        }
          v1.push_back(prev1);
                v1.push_back(prev2);
                v.push_back(v1);
                v1.clear();
        
        return v;
        
    }
};