class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans=0;
        int k=n;
        while(true)
        {
            if(n%2==0 && n%k==0)
            {
                return n;
            }
            n=n*2;
        }
        return -1;
    }
};