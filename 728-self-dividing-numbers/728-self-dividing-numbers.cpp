class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
       vector<int>v;
        
        for(int i=left;i<=right;++i)
        {

            int x=i;
            bool my=true;
            while(x>0)
            {
                int temp=x%10;
                if(temp!=0){
                 if(i%temp!=0 )
                 {
                   my=false;
                    /* continue ;*/
                 }}
                 else {
                    /* continue;*/
                     my=false;

                 }
                x=x/10;
               
            }
            
            if(my==true )
            {
                
                v.push_back (i);
            }
        
        
        }
        
        
        
        return v;
        
        
        
        
        
    }
};