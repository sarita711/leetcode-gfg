class Solution {
public:
    int minMovesToSeat(vector<int>& st, vector<int>& s) {
        
      
        sort(st.begin(),st.end());
        sort(s.begin(),s.end());
        int sum=0;
        for(int i=0;i<s.size();++i)
        {
                 
            sum+=abs(s[i]-st[i]);
         }
        return sum;
    }
};