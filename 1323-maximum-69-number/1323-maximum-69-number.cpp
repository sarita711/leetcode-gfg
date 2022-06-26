class Solution {
public:
    int maximum69Number (int num) {
       int x=0;
        int l=num;
        while(l>0)
        {
            x++;
            l=l/10;
        }
       int arr[x];
        int k=num;
       for(int i=x-1;i>=0;i--)
       {
            arr[i]=k%10;
           k=k/10;
       
       }
     
       for(int i=0;i<x;++i)
       {
            if(arr[i]!=9)
            {
                arr[i]=9;
                break;
            }
       
       }
        int ans=0;
        for(int i=0;i<x;++i)
        {
            ans=arr[i]+ans*10;
        
        
        }
        return ans;
        
    }
};