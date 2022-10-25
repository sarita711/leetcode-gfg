class Solution {
public:
    bool checkString(string s) {
        
        int x=s.size();
        int i=0;
        for( i=0;i<s.size();++i)
        {
           if(s[i]=='b')
           {
              break;
           }
        
        }
        for(int j=i;j<s.size();++j)
        {
           if(s[j]=='a')
           {
               return false;
           }
        }
    
        return true;
    }
};