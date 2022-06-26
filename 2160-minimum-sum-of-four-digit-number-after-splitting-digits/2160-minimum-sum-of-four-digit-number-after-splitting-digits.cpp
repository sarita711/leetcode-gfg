class Solution {
public:
    int minimumSum(int num) {
        
        int m=100000;
        int arr[4];
        for(int i=0;i<4;++i)
        {
           arr[i]=num%10;
            num=num/10;
        }
        
        sort(arr,arr+4);
        
        return arr[0]*10+arr[2]+arr[1]*10+arr[3];
        
        
        
    }
};