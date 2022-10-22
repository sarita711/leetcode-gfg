class Solution {
public:
    string replaceDigits(string s) {
         int x=s.size();
        
        string ans;
        
       
        if(s[0]>='0' && s[0]<='9'){
            s[0]=char(97+int(s[0])-48);;
        }
       
        
        int j=97;
        
        for(int i=1;i<x;++i)
        {
             if(s[i]>='0' && s[i]<='9')
            {
                 
                 s[i]=char(int(s[i-1])+int(s[i])-48);
               
                 
             
             }
             

        
        }
                return s; 
    }
};