class Solution {
public:
    bool isPowerOfFour(int n) {
      long long int i;
        if(n==0)return false;
        if(n==1)return true;
        for( i=4;i<=n;i=i*4)
        {
            if(i==n)
            {
                return true;
            }
        }
        
       return false;
        
    }
};