class Solution {
public:
    string removeStars(string s) {
        int x = s.size();
        string ans;
        int i=x-1;
        int val=0;
        while(i>=0)
        {
            if(val==0 && s[i]!='*')
            {
                ans+=s[i];
            }
            else if(s[i]=='*')
            {
                val++;
            }
            else if(val!=0 && s[i]!='*')
            {
                val--;
                
            }
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
            
    }
};