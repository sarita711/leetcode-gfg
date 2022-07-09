class Solution {
public:
    string reverseWords(string s) {
     
        int x=s.size();
        string k;
        string ans;
        for(int i=0;i<x;++i)
        {
             if(isspace(s[i]))
             {
                 int x1=k.size();
                 for(int j=0;j<x1/2;++j)
                 {
                     char c=k[j];
                     k[j]=k[x1-j-1];
                     k[x1-j-1]=c;
                     
                     
                 }
                
                   ans+=k;
                 if(i!=x-1){
               ans+=" ";
                 }
               
                 k.clear();
                 
             }
            else{

               k+=s[i];
            
            }
            
            
        }
         int x1=k.size();
                 for(int j=0;j<x1/2;++j)
                 {
                     char c=k[j];
                     k[j]=k[x1-j-1];
                     k[x1-j-1]=c;
                     
                     
                 }
       return ans+k; 
        
    }
};