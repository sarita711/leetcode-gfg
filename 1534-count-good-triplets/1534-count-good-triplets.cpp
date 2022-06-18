class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        
        int x=arr.size();
        int sum=0;
        for(int i=0;i<x;++i)
        {

          for(int j=i+1;j<x;++j)
          {
              
              if(abs(arr[i]-arr[j])<=a)
              {

                     for(int k=j+1;k<x;++k)
                     {
                         
                          if(abs(arr[j]-arr[k])<=b &&abs(arr[i]-arr[k])<=c )
                          {
                               sum++;
             
                            }       
                      }
             }
   
          
          }
     
        }
  return sum;
        
    }
};