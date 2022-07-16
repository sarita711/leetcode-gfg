class Solution {
public:
    int countWords(vector<string>& w1, vector<string>& w2) {
        map<string,int>m1;
        map<string,int>m2;
        for(int i=0;i<w1.size();++i)
        {
            m1[w1[i]]++;
            
            
            
            
        }
          for(int i=0;i<w2.size();++i)
        {
            m2[w2[i]]++;
            
        }
        int ans=0;
        for(int i=0;i<w1.size();++i)
        {
             if(m1[w1[i]]==1 && m2[w1[i]]==1)
             {
                 
                 ans++;
                 
             }
         }
        /* for(int i=0;i<w2.size();++i)
        {
             if(m2[w2[i]]==1 && m1[w2[i]]==1)
             {
                 
                 ans++;
             }
         }*/
              
        return ans;
    }
};