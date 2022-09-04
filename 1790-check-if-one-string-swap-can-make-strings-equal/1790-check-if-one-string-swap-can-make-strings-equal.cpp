class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
       
        int x1=s1.size();
        int x2=s2.size();
        string k1=s1;
        string k2=s2;
        if(s1==s2)return true;
        sort(k1.begin(),k1.end());
        sort(k2.begin(),k2.end());
        for(int i=0;i<x1;++i)
        {
            if(k1[i]!=k2[i])
            {
                return false;
            }
            
        }
        int k=0;
        for(int i=0;i<x1;++i)
        {
            if(s1[i]!=s2[i] && k<2)
            {
                s2[i]=s1[i];
                k++;
            }
            
            
        }
        
        if(s1==s2)return true;
        return false;
        
    }
};