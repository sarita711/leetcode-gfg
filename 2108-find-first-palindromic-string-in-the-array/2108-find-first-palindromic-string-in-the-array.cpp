class Solution {
public:
    string firstPalindrome(vector<string>& s) {
       
         int x=s.size();
        
        string ans;
        int sum=0;
        for(int i=0;i<x;++i)
        {
                 
                 
                 string l;
                  string k=s[i];
                 int x1=k.size();
                 for(int j=0;j<x1;++j)
                 {
                     
                     l+=k[x1-j-1];
                    
                     
                     
                 }
                
                  if(l==k)
                  {
                      return k;
                  }
    
            
        }
        
    
        return "";
        
        
    }
};