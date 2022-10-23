class Solution {
public:
    int prefixCount(vector<string>& wd, string pref) {
        
        int x=wd.size();
        int ans=0;
        for(int i=0;i<x;i++)
        {
            string k=wd[i];
            
            string sb=k.substr(0,pref.size());
            if(sb==pref)
            {
                ans++;
            }
        
        }
        return ans;
    }
};