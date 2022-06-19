class Solution {
public:
    int minOperations(vector<int>& nums) {
       
        int x=nums.size();
        int sum=0;
        for(int i=1;i<x;)
        {
             if(nums[i] > nums[i-1])
             {

               i++;


             }
             else if(nums[i]==nums[i-1])
             {

                 sum++;
                 nums[i]+=1;
                 i++;
              }
            else {

               sum+=nums[i-1]-nums[i]+1;
                nums[i]+=nums[i-1]-nums[i]+1;
                i++;

 
             }
    
        }
        
        
      return sum;  
    }
};