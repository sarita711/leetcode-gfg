class Solution {
public:
    int numDifferentIntegers(string wd) {
        
        map<string,long long int>m;
        string k;
        int ans=0;
        for(int i=0;i<wd.size();++i)
        {
             if(int(wd[i])>=48 && int(wd[i])<=57 )
            {
             if(int(wd[i])==48)
                 
             {
                 if(k.size()!=0)
                 {
                     k+=wd[i];

                 }
        else if((i+1<wd.size() || i==wd.size()-1) &&(wd[i+1]<48 || wd[i+1]>57))
                    {
                       k+=wd[i];
                    }
                          
             }
               else{
                   
                   
                     k+=wd[i];
               }

            
            
            }
            else{
                
                  if(k.size()!=0){
                  m[k]++;
                  
                   k.clear();
                  }
            
            
            }
            
        }
          cout<<k<<" ";
        if(k.size()!=0){
        m[k]++;
            k.clear();
        }
         for(int i=0;i<wd.size();++i)
        {
            if(int(wd[i])>=48 && int(wd[i])<=57 )
            {
             if(int(wd[i])==48)
                 
             {
                 if(k.size()!=0)
                 {
                     k+=wd[i];

                 }
        else if((i+1<wd.size() || i==wd.size()-1) &&(wd[i+1]<48 || wd[i+1]>57))
                    {
                       k+=wd[i];
                    }
                          
             }
               else{
                   
                   
                     k+=wd[i];
               }

            
            
            }
            else{
                
                  if(k.size()!=0){
                  if(m[k]!=0)
                  {
                      ans++;
                      m[k]=0;
                  }
                  
                   k.clear();
                  }
            
            
            }
            
            
        }
      
      if(m[k]!=0)
        {
            ans++;
        }
        return ans;
        
    }
};