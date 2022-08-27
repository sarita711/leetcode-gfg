class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double mx=0;
       double x=0;
        int x1=nums.size();
        if(nums.size()<k)return 0;
          if(nums.size()==1 && k==1)
          {
              return nums[0]/k;
          }
        
        for(int i=0;i<k;++i)
        {x+=nums[i];}
           
        int k1=x;
        
        if(nums.size()==k)
        {
            return x/k;
        }
        mx=x/k;
        int i;
        for( i=k;i<nums.size();++i)
        {
            
           x=x+nums[i]-nums[i-k];
            
            mx=max(mx,x/k);
            
        }
        int l=0;
      /* for(int j=x1-k;j<x1;++j)
        {
        
            x+=nums[l]-nums[j-1];
           l++;
             mx=max(mx,x/k);
        }*/
        
        
        return mx;
        
        
    }

};