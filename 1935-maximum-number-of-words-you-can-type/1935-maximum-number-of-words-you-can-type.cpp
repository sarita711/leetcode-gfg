class Solution {
public:
    int canBeTypedWords(string t, string b) {
       
        int ans=0;
        map<char,int>m;
        int x1=t.size();
        int x2=b.size();
        
        for(int i=0;i<x2;++i)
        {
            m[b[i]]++;
        
        }
        string k;
        for(int i=0;i<x1;++i)
        {
            if(isspace(t[i]))
            {
                bool val =false;
                for(int j=0;j<k.size();++j)
                {
                    if(m[k[j]]!=0)
                    {
                        val=true;
                    }
                    
                    
                }
                
                if(val==false)
                {
                    ans++;

                }
                k.clear();
            
            }
            else{
                
                
                k+=t[i];
            }
            
            
            
        }
         bool val =false;
                for(int j=0;j<k.size();++j)
                {
                    if(m[k[j]]!=0)
                    {
                        val=true;
                    }
                    
                    
                }
                
                if(val==false)
                {
                    ans++;

                }
        
        return ans;
        
    }
};