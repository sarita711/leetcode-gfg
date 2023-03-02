class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int x = nums.size();
        
        int arr1[x];
        int arr2[x];
        
        int sum=0;
        for(int i=0;i<x;i++)
        {
            arr1[i]=sum;
            sum+=nums[i];
        }
        sum=0;
        for(int i=0;i<x;i++)
        {
            arr2[x-i-1]=sum;
            sum+=nums[x-i-1];
        }
        
        for(int i=0;i<x;i++)
        {
            nums[i]=abs(arr1[i]-arr2[i]);
        }
        
        return nums;
    }
};