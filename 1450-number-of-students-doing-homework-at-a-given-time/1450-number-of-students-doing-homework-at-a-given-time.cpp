class Solution {
public:
    int busyStudent(vector<int>& st, vector<int>& en, int q) {
        
        
        int x1=st.size();
        
        int x2=en.size();
        int sum=0;
        for(int i=0;i<x1;++i)
        {

            if(q>=st[i] && q<=en[i])
            {
                
                sum++;
            }

        
        }
        return sum;
        
    }
};