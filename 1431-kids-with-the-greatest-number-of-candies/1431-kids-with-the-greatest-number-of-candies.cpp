class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& ca, int ex) {
      
        int mx=0;
         vector<bool>v;
        for(int i=0;i<ca.size();++i)
        {
          mx=max(mx,ca[i]);

        }
        for(int i=0;i<ca.size();++i)
        {
            
            if(mx<=ex+ca[i])
            {
                v.push_back (true);
 
            }
            else {
                   v.push_back (false);

            }
            
            
        }
        
        return v;
        
        
        
        
    }
};