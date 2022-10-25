class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& wd1, vector<string>& wd2) {
        int x1=wd1.size();
        int x2=wd2.size();
        
        string ans1;
        string ans2;
        
        
        for(int i=0;i<x1;i++)
        {
            ans1+=wd1[i];
        }
        for(int i=0;i<x2;i++)
        {
            ans2+=wd2[i];
        }
        return ans1==ans2;
        
    }
};