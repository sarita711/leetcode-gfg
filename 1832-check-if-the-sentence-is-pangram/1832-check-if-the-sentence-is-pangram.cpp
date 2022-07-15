class Solution {
public:
    bool checkIfPangram(string s) {
       map<int,int>m;
        
        for(int i=0;i<s.size();++i)
        {
            m[int(s[i])]++;
            
            
        }
        for(int i=97;i<=122;++i)
        {
            if(m[i]==0)
            {
                return false;
            }
        }
        return true;
    }
};