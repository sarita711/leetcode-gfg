class Solution {
public:
    int countGoodSubstrings(string s) {
       int ans=0;
        string k;
        int x=s.size();
        int j=0;
        int j1=0;
        for(int i=0;i<x;++i)
        {
              if(i+2<x)
              {
                  if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2])
                  {
                      ans++;

                  
                  }
                      
         
              }
        
        
            
        }
        return ans;
    }
};