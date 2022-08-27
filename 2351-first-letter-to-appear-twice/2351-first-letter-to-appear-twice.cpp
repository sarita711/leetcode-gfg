class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int>m;
        int x=s.size();
        
        char c=s[0];
        
        for(int i=0;i<x;++i)
        {  m[s[i]]++;
            
             
             if(m[s[i]]==2)
             {
                return s[i];
             }
           
        
        
        }
        return s[0];
    }
};