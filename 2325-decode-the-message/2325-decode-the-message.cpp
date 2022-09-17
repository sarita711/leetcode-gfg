class Solution {
public:
    string decodeMessage(string k, string m) {
        int x1=k.size();
        int x2=m.size();
        
        string ans1="abcdefghijklmnopqrstuvwxyz";
    
        int j=0;
        unordered_map<char,char>m1;
        map<char,int>m2;
        for(int i=0;i<x1;++i)
        {
              if(isspace(k[i]))
              {
                 
              }
            else{
                if(j<26 && m2[k[i]]==0){
                 m1[k[i]]=ans1[j];
                   
                  j++;
                    m2[k[i]]++;
                }
            }
        
        }

      
        string ans;
        for(int i=0;i<x2;++i)
        {
                if(isspace(m[i]))
                {
                      ans+=' ';
                }
               else{
                 ans+=m1[m[i]];}
            
               
               
            
        }
        return ans;
    }
};