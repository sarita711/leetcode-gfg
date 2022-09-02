class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        vector<int>v;
        int x=points.size();
        int x1=queries.size();
        
        for(int i=0;i<x1;++i)
        {
             int kx=queries[i][0];
             int ky=queries[i][1];
             int r=queries[i][2];  
            
            int ans=0;
            
            for(int j=0;j<x;++j)
            {
                
                int n=points[j][0];
                int n1=points[j][1];
                int s1=n-kx;
                int s2=n1-ky;
                    
                if(s1*s1+s2*s2<=r*r){
                    ans++;
                }
               
            }
            v.push_back(ans);
        }
        
        return v;
    }
};