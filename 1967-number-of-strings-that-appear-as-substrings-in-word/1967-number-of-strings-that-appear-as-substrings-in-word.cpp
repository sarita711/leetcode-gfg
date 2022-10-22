class Solution {
public:
    int numOfStrings(vector<string>& p, string w) {
        int x=p.size();
        int ans=0;
        for(int i=0;i<x;i++)
        {
            if(w.find(p[i])>=0 && w.find(p[i])<w.size())
            {
              ans++;
            }
          
        }
        return ans;
    }
};