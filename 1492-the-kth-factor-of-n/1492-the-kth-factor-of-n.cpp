class Solution {
public:
    int kthFactor(int n, int k) {
      
         int ans=0;
         int i=1;
         int j=0;
        
        while(i<=n)
        {

            if(n%i==0)
            {
                ans++;
                
            }
            if(ans==k)return i;
            i++;
      
        }
            if(ans<k)return -1;
         return ans;
        
    }
};