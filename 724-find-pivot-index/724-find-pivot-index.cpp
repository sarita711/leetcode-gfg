class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     /* int x=nums.size()  ;
      
     int sum=0;
        for(int i=0;i<x;++i)
        {
            sum+=nums[i];
            
        }
        
        int sum1=0;
        sum=sum/2;
        int k=0;
        for(int i=0;i<x;++i)
        {
            sum1+=nums[i];
            if(sum1==sum)
                
            {k=i+1;
                break;
                   return i+1;
            
            }
         if(sum1>sum)
         {
             break;
             return -1;
          }
        
        
        }
        cout<<sum;
     return k;
    */
        int sum = 0;
        int pre = 0;
        for(auto x:nums)                                      // sum using for each loop
        {
            sum+=x;
        }
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(sum - pre - nums[i] == pre)                                 // Check condition
                return i;                                                  // Return index
            pre+=nums[i];                                                  // Update pre sum (left sum)
        }
        return -1;       
    }
};