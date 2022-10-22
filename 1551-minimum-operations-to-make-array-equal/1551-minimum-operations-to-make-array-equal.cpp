class Solution {
public:
    int minOperations(int n) {
        int arr[n];
        int ans=0;
        for(int i=0;i<n;++i)
        {
            arr[i]=2*i+1;
            ans+=arr[i];
            
        
        }
        ans=ans/n;
        int ans1=0;
        for(int i=0;i<n;++i)
        {
           //ans1=max(abs(ans-arr[i]),ans1);
            ans1+=abs(ans-arr[i]);
        }
        
        return ans1/2;
        
    }
};