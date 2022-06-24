class Solution {
public:
    string sortSentence(string s) {
      int x=s.size()  ;
      map<int,string>m;
        string k;
      string ans;
        int mx=0;
      for(int i=0;i<=x-1;++i)
      {
         
          if(isspace(s[i+1])|| i+1==x)
          {

              m[s[i]-'0']=k;
             mx=max(mx,s[i]-'0');
              k.clear();
             i++;
              
             
          }
          else {

          k+=s[i];
           
         }
       
      }
   
        for(int i=1;i<=mx;++i)
        {

                   
                    ans+=m[i];
                    if(i!=mx)
                        
                    {
                        ans+=" ";
                     }
        }
       
        return ans;
        
    }
};