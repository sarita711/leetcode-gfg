class Solution {
public:
    int percentageLetter(string s, char letter) {
        map<char,int>m;
        int x=s.size();
        for(int i=0;i<x;++i)
        {
            m[s[i]]++;
        }
        
        int x1=m[letter]*100/x;
        return x1;
    }
};