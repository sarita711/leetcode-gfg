class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      
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