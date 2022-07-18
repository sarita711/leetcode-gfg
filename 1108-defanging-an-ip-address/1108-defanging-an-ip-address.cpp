class Solution {
public:
    string defangIPaddr(string a) {
        int x=a.size();
        string s;
        for(int i=0;i<x;++i)
        {
              if(a[i]=='.')
              {
                  s+='[';
                  s+='.';
                  s+=']';
              }
             else{
                 s+=a[i];
             }
        
        }
        return s;
        
    }
};