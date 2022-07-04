class Solution {
public:
int findPairs(vector<int>&nums, int k) {
if(nums.size()<2)
return 0;
int count=0;
map<pair<int,int>,int> m;
for(int i=0;i<nums.size()-1;i++)
{
for(int j=i+1;j<nums.size();j++)
{
if(abs(nums[i]-nums[j])==k)
{count++; m[{min(nums[i],nums[j]),max(nums[i],nums[j])}]++;}
}
}
return m.size();
}
};