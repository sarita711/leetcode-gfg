class Solution {
public:
    bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
       if( n==2 || n==3 || n==5)return true;
     if( n%2==0 || n%3==0||n%5==0)return false;
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
    unsigned int c(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
    int countPrimeSetBits(int left, int right) {
        
        int ans=0;
        for(int i=left;i<=right;i++)
        {
            int sum=0;
            int temp=i;
            sum=c(temp);
            
            if(isPrime(sum)==true)
            {
                ans++;
            }
            
        }
        return ans;
        
    }
};