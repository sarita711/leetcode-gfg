class Solution {
public:
    string restoreString(string s, vector<int>& ind) {
        map<int,char>m;
        int x=s.size();
        int x1=ind.size();
        
        for(int i=0;i<x;++i)
        {
            m[ind[i]]=s[i];
            
        }
        
        sort(ind.begin(),ind.end());
        
        string ans;
        for(int i=0;i<x;++i)
        {
              ans+=m[ind[i]];
        }
        return ans;
        
    }
};