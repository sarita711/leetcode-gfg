class Solution {
public:
    int countSegments(string s) {
        int x=s.size();
        int ans=0;
        string k;
        
        for(int i=0;i<x;++i)
        {
            if(!isspace(s[i]))
            {
              k+=s[i];
            
            }
            else{
                
                if(k.size()!=0)
                {
                    ans++;
                    k.clear();
                }
                
            }
            
            
        }
         if(k.size()!=0)
                {
                    ans++;
                    k.clear();
                }
        return ans;
        
    }
};