class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int>v1=nums;
        vector<int>v2=nums;
        sort(v1.begin(),v1.end());
        sort(v2.rbegin(),v2.rend());
        if(v1==nums || v2==nums)
        {
             return true;
        }
        return false;
    }
};