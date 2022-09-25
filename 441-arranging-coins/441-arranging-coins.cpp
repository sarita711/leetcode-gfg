class Solution {
public:
    int arrangeCoins(int n) {
        
        int i=1;
        int ans=0;
        
        while(n>=0)
        {
            ans++;
            n=n-i;
            i++;

        }
        if(n==0)
        {

            return 0;
        }
      return ans-1;
        
    }
};