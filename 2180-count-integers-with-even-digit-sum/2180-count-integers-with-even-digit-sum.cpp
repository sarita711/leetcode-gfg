class Solution {
public:
    int countEven(int num) {
        int ans=0;
        
        for(int i=2;i<=num;i++)
        {
            int sum=0;
            int temp=i;
            while(temp>0)
            {
                sum+=temp%10;
                temp=temp/10;
            }
            if(sum%2==0)
            {
                ans++;
            }
        }
        return ans;
    }
};