class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        int x=nums.size();
       int arr[x];
        vector<int>v;
        
       for(int i=0;i<x;++i)
       {


         v.insert(v.begin() + index[i],nums[i]);

       }
      return v;
    }
};
