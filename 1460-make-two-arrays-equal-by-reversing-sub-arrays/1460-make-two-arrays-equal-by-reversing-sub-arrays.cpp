class Solution {
public:
    bool canBeEqual(vector<int>& t, vector<int>& a) {
        sort(t.begin(),t.end());
        sort(a.begin(),a.end());
        
       
        int x=t.size();
       
        
        for(int i=0;i<x;++i)
        {
           
            if(a[i]!=t[i]){return false;}
            
            
        }
        
        
        return true;
    }
};