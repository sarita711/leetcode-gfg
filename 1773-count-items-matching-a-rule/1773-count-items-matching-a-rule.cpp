class Solution {
public:
    int countMatches(vector<vector<string>>& it, string ruleKey, string ruleValue) {
        int x=it.size();
       
            int ans=0;
        
             if(ruleKey=="type")
             {

                 for(int i=0;i<x;++i)
                 {
                     if(ruleValue==it[i][0])
                     {
                       ans++;
                     }

                 
                 
                 }
             
             }
              else if(ruleKey=="color")
              {
                     for(int i=0;i<x;++i)
                 {
                     if(ruleValue==it[i][1])
                     {
                       ans++;
                     }

                 
                 
                 }

              
              }
            
            else if(ruleKey=="name")
            {

                       for(int i=0;i<x;++i)
                 {
                     if(ruleValue==it[i][2])
                     {
                       ans++;
                     }

                 
                 
                 }
            
            }
        
        
        return ans;
        
    }
};