class Solution {
public:
    vector<int> sumZero(int n) {
      
       vector<int>v;
        int sum=0;
        for(int i=1;i<=n-1;++i)
        {
            v.push_back(i);
            sum+=i;
            
        }
        v.push_back(-sum);
        
        return v;
        
        
    }
};