class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
     int x=nums.size() ;
       int ans=0;
        
                  
        for(int i = 1; i < x; i++){
            if(nums[i] < nums[i-1]){
               
                if((i == 1 || nums[i-2] <= nums[i] ) && ans<1) {nums[i-1] = nums[i]; ans++; }  
                else if(ans<1)
                {nums[i] = nums[i-1];
                 ans++;
                }
  
            }
        }
        vector<int>v=nums;
        sort(v.begin(),v.end());
        return v==nums; 
    }
};