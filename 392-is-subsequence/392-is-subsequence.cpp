class Solution {
public:
    bool isSubsequence(string s, string t) {
      
        int x=s.size();
        int x1=t.size();
        
        int i=0;
        int j=0;
        
        while(i<x && j<x1)
        {

              if(s[i]==t[j])
              {
                   i++;
                  j++;



                }
               else {
                  j++;


               }
    
        }
        if(i==x)
        {
            
            return true;
        }
        
        
        return false;
        
        
    }
};