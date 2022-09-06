class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        int x=p.size();
       
        vector<int>v;
        for(int i=0;i<x;++i)
        {
            bool val=false;
            for(int j=i+1;j<x;++j)
            {
                if(p[i]>=p[j])
                {
                    v.push_back(p[i]-p[j]);
                    j=x;
                    val=true;
                }
            }
            if(val==false)
            {
                v.push_back(p[i]);
            }
            
            
        }
        return v;
    }
};