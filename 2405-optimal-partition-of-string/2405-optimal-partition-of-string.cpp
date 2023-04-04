class Solution {
public:
    int partitionString(string s) {
        int x = s.size();
        string s1;
        int ans=0;
        s1+=s[0];
        for(int i=1;i<x;i++)
        {
            if(s1.size()!=0 && s1.find(s[i])!=string::npos)
            {
                ans++;
                s1.clear();
                 
            }
            s1+=s[i];
      
        }
        if(s1.size()!=0)
        {
          ans++;
            s1.clear();
        }
        return ans;
    }
};