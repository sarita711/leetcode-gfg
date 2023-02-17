class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        vector<int>v;
        int m=0,mx=s.size();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='I')
            {
                v.push_back(m);
                m++;
            }
            else if(s[i]=='D')
            {
                v.push_back(mx);
                mx--;
            }
        }
        if(s[s.length()-1]=='D')
        {
            v.push_back(mx);
        }
        else
        {
            v.push_back(m);
        }
        return v;
    }
};