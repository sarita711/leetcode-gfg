class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
       
        int x=nums.size();
        int sum=0;
        for(int i=0;i<x;++i)
        {

             for(int j=i+1;j<x;++j )
             {
                   
                 
                 if(nums[i]==nums[j] && i*j%k==0)
                 {


                 
                    sum++;
                 }

             
             }
      }
        
        
        
        
        return sum;
        }};