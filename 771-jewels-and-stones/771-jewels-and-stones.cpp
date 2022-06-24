class Solution {
public:
    int numJewelsInStones(string j, string s) {
       
        map<char,int>m;
      
        
       int x1=j.size();
        int x2=s.size();
        
        for(int i=0;i<x2;++i)
        {
              
            m[s[i]]++;

        
        }
        int sum=0;
        for(int i=0;i<x1;++i)
        {

             sum+=m[j[i]];
        
        }
         return sum;
     }
};