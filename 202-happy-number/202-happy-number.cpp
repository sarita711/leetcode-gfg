class Solution {
public:
    bool isHappy(int n) {
     
        set<int>s;
        if(n>0)
        { 
           while(n>1)
             {
                   int sum=0;
               int t=n;
               
               while(t>0)
               {
sum+=(t%10)*(t%10);
t=t/10;
                  



  }
           
       if(s.find(sum)!=s.end())
       {
return false;


}
  else {         n=sum;
s.insert(sum);
       }
             }
            if(n==1)
            {
return true;


 }
            
            
        }
        else {
return false;


}
        
        
     return false;   
        
        
        
    }
};