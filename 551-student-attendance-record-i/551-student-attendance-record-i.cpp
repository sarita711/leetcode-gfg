class Solution {
public:
    bool checkRecord(string s){
        
        map<int,int>m;
        int x=s.size();
        for(int i=0;i<x;++i)
        {
           m[int(s[i])]++;
        
        }
        bool val1=false;
        bool val2=false;
        
        if(m[int('A')]<2 && m[int('L')]<3)
        {return true;}
      
        if(m[int('L')]>=3){
        for(int i=0;i<x;++i)
        {
           if(s[i]=='L')
           {
               if(s[i]==s[i+1] && s[i+2]==s[i])
               {
                   val2=true;
                   break;
               }
             

           
           }
       
        }
        }
        
        
        if( val2==false && m[int('A')]<2)
        {
            return true;
        }
        return false;
    }};