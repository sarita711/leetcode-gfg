class Solution {
public:
    bool strongPasswordCheckerII(string p) {
        if(p.size()<8)
        {
            return false;
        }
        int a1=0;//a
        int a2=0;//A
        
        int a3=0;//digit
        int a4=0;//special 
        
        for(int i=0;i<p.size();++i)
        {
            if(int(p[i])>=97 && int(p[i])<=122)
            {
                a1++;
                
                
            }
            if(int(p[i])>=65 && int(p[i])<=90)
            {
                a2++;
                
                
            }
           if(int(p[i])>=48 && int(p[i])<=57)
            {
                a3++;
                
                
            }
     if(int(p[i])>=33 && int(p[i])<=43 || int(p[i])==64 || int(p[i])==94 || int(p[i])==45){
                
                a4++;
            }
            
            
            
            
        }
        
        if(a1<1 || a2<1 || a3<1|| a4<1)
        {
            return false;
        }
        
        for(int i=1;i<p.size();++i)
        {
            if(int(p[i])==int(p[i-1]))
            {
                return false;
            }
       }
        return true;
        
    }
};