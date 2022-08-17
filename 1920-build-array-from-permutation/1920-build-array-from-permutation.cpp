class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
       map<int,int>m;
        
        int arr[nums.size()];
        for(int i=0;i<nums.size();++i)
        {
            
            arr[i]=nums[nums[i]];

        }
        
        for(int i=0;i<nums.size();++i)
        {
              nums[i]=arr[i];
        
        }
        
        
       return nums; 
        
    }
};