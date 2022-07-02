class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        int k=0;
        int l=num;
        string ans1;
        string ans2;
        string ans3;
        if(l%10==0 && l!=0)
        {
            return false;
        }
        while(l>0)
        {
           
            ans1+=l%10;
            l=l/10;
            
        }
        if(ans1.size()==1)
        {
            return true;
        }
        for(int i=0;i<ans1.size();++i)
        {
           ans2+=ans1[ans1.size()-1-i];
            
         
        
        }
           for(int i=0;i<ans2.size();++i)
        {
           ans3+=ans2[ans2.size()-1-i];
            
         
        
        }
        for(int i=0;i<ans1.size();++i)
        {
             if(ans1[i]=='0'& (i==0 || i==ans1.size()-1))
             {
                 
                 return false;
             }
                 

        }
        return ans1==ans3;
       
        
        
    }
};