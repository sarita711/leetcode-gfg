class Solution {
public:
    int xorOperation(int n, int start) {
      
        
        int nums[n+1];
        int ans=start;
      for(int i=1;i<n;++i) 
      {
         
          nums[i]=start+2*i;
          ans=ans ^ nums[i];
      
      
      }
       
        return ans;        
    }
};