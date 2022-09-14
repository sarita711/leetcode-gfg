class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          string ans;
        if(strs.size()==0 || strs[0]=="")return ans;
        if(strs.size()==1)return strs[0];
        string k=strs[0];
        
        int x=strs.size();
        int mn=10000000;
        for(int i=1;i<x;++i)
        {
            string k1=strs[i];
            int x1=k1.size();
            int r1=0;
            for(int j=0;j<x1;++j)
            {
                if(k[j]==k1[j])
                {
                    r1++;
                }
                else{
                    j=x1;
                }
            }
            mn=min(r1,mn);
        }
      
        
        for(int i=0;i<mn;++i)
        {
            ans+=k[i];
        }
        return ans;
    }
};