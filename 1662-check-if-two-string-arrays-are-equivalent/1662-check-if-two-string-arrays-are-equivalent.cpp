class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
       
       string s1,s2;
        int x1=w1.size();
        int x2=w2.size();
        for(int i=0;i<x1;++i)
        {
             s1+=w1[i];

        
        }
         for(int i=0;i<x2;++i)
        {
             s2+=w2[i];
         }
        
        if(s1==s2)
        {


                return true;
        }
        return false;
      
    }
};