class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>m;
        
        for(int i=0;i<s.size();++i)
        {
            m[s[i]]++;
        }
        int x=m[s[0]];
         
        for(int i=0;i<s.size();++i)
        {
          if(x!=m[s[i]])
          {
              return false;
          }
        }
        return true;
    }
};