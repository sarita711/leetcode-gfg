class Solution {
public:
    bool canBeEqual(vector<int>& t, vector<int>& a) {
        sort(t.begin(),t.end());
        sort(a.begin(),a.end());
        
        map<int,int>m1;
        map<int,int>m2;
        int x=t.size();
        for(int i=0;i<x;++i)
        {
            m1[t[i]]++;
           
        }
        for(int i=0;i<x;++i)
        {
            m2[a[i]]++;
           
        }
        
        for(int i=0;i<x;++i)
        {
            if( m1[a[i]]==0 || m2[t[i]]==0 )
            {
                return false;
            }
            if(a[i]!=t[i]){return false;}
            
            
        }
        
        
        return true;
    }
};