class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
        
        map<char,int>m1;
        
                
        map<char,int>m2;
        
        int x1=s.size();
        int x2=target.size();
        sort(target.begin(),target.end());
        
        for(int i=0;i<x1;++i)
        {
            m1[s[i]]++;

        }
          for(int i=0;i<x2;++i)
        {
            m2[target[i]]++;

        }
         
        
        int mn=s.size();

        for(int i=0;i<x2;++i)
        {

           if(mn>m1[target[i]]/m2[target[i]])
           {
               mn=m1[target[i]]/m2[target[i]];


           }

        }
        
        
        return mn;
        
        
        
        
        
    }
};