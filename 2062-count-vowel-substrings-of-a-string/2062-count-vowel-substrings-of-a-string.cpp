class Solution {
public:
    int countVowelSubstrings(string s) {
        int n=s.size();
        int ans=0;
        unordered_set<char>st;
        for(int i=0;i<n;++i){
            for(int j=i;j<n;++j){
                if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                     st.insert(s[j]);
                }
                else break;
                if(st.size()==5) ans++;
            }
            st.clear();
        }
        return ans;
    }
};