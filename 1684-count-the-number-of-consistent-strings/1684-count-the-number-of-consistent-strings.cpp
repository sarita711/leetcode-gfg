class Solution {
public:
    int countConsistentStrings(string ad, vector<string>& wd) {
        int x=ad.size();
        map<char,int>m;
        for(int i=0;i<x;++i)
        {

            m[ad[i]]++;

        }
        int ans=0;
        for(int i=0;i<wd.size();++i)
        {
            string k=wd[i];
            bool val=false;
            for(int j=0;j<k.size();++j)
            {
                if(m[k[j]]==0)
                {
                    val=true;
                }

            }
            
            if(val==false)
            {
                ans++;
            }
        
        
        }
        return ans;
    }
};