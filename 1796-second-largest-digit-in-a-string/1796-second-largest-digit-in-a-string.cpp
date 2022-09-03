class Solution {
public:
    int secondHighest(string s) {
       int x=s.size();
        int mx1=-1;
        
        for(int i=0;i<x;++i)
        {
            if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4'|| s[i]=='5' || s[i]=='6' || s[i]=='7'|| s[i]=='8' || s[i]=='9' )
            {
                
              
                mx1=max(s[i]-'0',mx1);
                
            }
            
            
            
            
        }
        int mx2=-1;
        for(int i=0;i<x;++i)
        {
            if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4'|| s[i]=='5' || s[i]=='6' || s[i]=='7'|| s[i]=='8' || s[i]=='9' )
            {
                
              if(s[i]-'0' !=mx1){
                mx2=max(s[i]-'0',mx2);}
                
            }
            
            
            
            
        }
       
        return mx2;
        
    }
};