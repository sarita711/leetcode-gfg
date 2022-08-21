class Solution {
public:
    string addStrings(string num1, string num2) {
      
        string ans;
        
        int i1=0;
        int i2=0;
        
        int x1=num1.size()-1;
        int x2=num2.size()-1;
        int prev=0;
        
        while(x1>=0 && x2>=0)
        {
           
            ans+=to_string((num1[x1]-'0'+num2[x2]-'0'+prev)%10);
            prev=(num1[x1]-'0'+num2[x2]-'0'+prev)/10;
            x1--;
            x2--;
       
        }
        
        while(x1>=0)
        {
            ans+=to_string((num1[x1]-'0'+prev)%10);
            prev=(num1[x1]-'0'+prev)/10;
           x1--;
        }
        while(x2>=0)
        {
            ans+=to_string((num2[x2]-'0'+prev)%10);
            prev=(num2[x2]-'0'+prev)/10;
           x2--;
        }
        if(prev!=0){
            ans+=to_string(prev);
        }
        for(int i=0;i<(ans.size())/2;++i)
        {
               char c=ans[i];
              ans[i]=ans[ans.size()-1-i];
            ans[ans.size()-1-i]=c;
        
        
        }
        
        return ans;
        
    }
};