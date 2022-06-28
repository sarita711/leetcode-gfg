// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long sumBetweenTwoKth( long long a[], long long n, long long k1, long long k2)
    {
        // Your code goes here
        
        long long arr[n];
        
        for(int i=0;i<n;++i)
        {
            arr[i]=a[i];
        }
        sort(arr,arr+n);
       
       int ans=0;
       for(int i=0;i<n;++i)
       {
           if(i+1>k1 && i+1<k2)
           {
               ans+=arr[i];
           }
           
       }
        return ans;
    }
};

// { Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}
  // } Driver Code Ends