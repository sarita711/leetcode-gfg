#include <cctype>
class Solution {
public:
    string mostCommonWord(string p, vector<string>& b) {
        int x1=p.size();
        int x2=b.size();
        string k;
        map<string,int>m;
        for(int i=0;i<x1;++i)
        {
            if(isspace(p[i]) || p[i]==',')
            {transform(k.begin(), k.end(), k.begin(), ::tolower);
              
                m[k]++;
                
                k.clear();
            }
            else{
        if(int((p[i])>=97 & int(p[i])<=122) || (int(p[i])>=65 && int(p[i])<=122))             {
                k+=tolower(p[i]);}
                
            }

        
        }
        transform(k.begin(), k.end(), k.begin(), ::tolower);
        m[k]++;
      
        k.clear();
       
        for(int i=0;i<x2;++i)
        {
           m[b[i]]=-1;
            

        
        }
        m[k]=-1;
        k.clear();
        
      
        string ans;
        int mx=-1;
         for(int i=0;i<x1;++i)
        {
            if(isspace(p[i])|| p[i]==',')
            {transform(k.begin(), k.end(), k.begin(), ::tolower);
                
                if(m[k]>mx){
                   mx=max(m[k],mx);
                     ans=k;
                    
                }
           
                k.clear();
            }
            else{
              if(int(p[i])>=97 & int(p[i])<=122 || int(p[i])>=65 && int(p[i])<=122){
                k+=p[i];
                  
              }
                
            }

        
        }
         
        if(k!="\0" && m[k]>mx){
        transform(k.begin(), k.end(), k.begin(), ::tolower);
        ans=k;
        }
        return ans;
        
    }
};