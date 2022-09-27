class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
       
        int x=n.size();
        map<int,string>m;
        
        for(int i=0;i<x;++i)
        {
            m[h[i]]=n[i];
         
        }
        sort(h.rbegin(),h.rend());
        
        vector<string>s;
        
        for(int i=0;i<x;++i)
        {
           s.push_back(m[h[i]]);
        
        }
        
        
        return s;
    }
};