class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        int x=nums.size();
        
        
          vector<int>v;
        
        for(int i=0;i<x;++i)
        {

             
            
            if(pivot>nums[i])
            {
                v.push_back (nums[i]);



                }
             


           
        
        } for(int i=0;i<x;++i)
        {

             
            
            if(pivot==nums[i])
            {
                v.push_back (nums[i]);



                }
             


           
        
        }
        
         for(int i=0;i<x;++i)
        {

             
            
            if(pivot<nums[i])
            {
                v.push_back (nums[i]);



                }
             


           
        
        }
        
        return v;
        
        
        
        
    }
};