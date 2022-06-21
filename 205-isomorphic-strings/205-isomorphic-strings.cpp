class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
         int x=s.size();
        
        map<char,char>m;
        map<char,int>m1;
        map<char,int>m2;
        for(int i=0;i<x;++i)
        {

         m[s[i]]=t[i];
        m1[s[i]]++;
            m2[t[i]]++;
            
        }
       
         for(int i=0;i<x;++i)
         {

            if(m[s[i]]!=t[i] || m1[s[i]]!=m2[t[i]] )
            {
              return false;
              
            
            }
           
         
         
         
         }
        
        return true;
        
        
        
    }
};