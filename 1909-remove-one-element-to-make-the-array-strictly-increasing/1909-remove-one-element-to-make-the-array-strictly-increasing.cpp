class Solution {
public:
    
    bool canBeIncreasing(vector<int>& nums) {
	for (int i = 1; i < nums.size(); i++)
		if (nums[i] <= nums[i - 1])
			return isIncreasing(removeElement(nums, i - 1)) ||
				isIncreasing(removeElement(nums, i));
	return true;
}
vector<int> removeElement(vector<int> &nums, int removedPoz){
	vector<int> ans;
	for (int i = 0; i < nums.size(); i++)
		if (i != removedPoz)
			ans.push_back(nums[i]);
	return ans;
}
bool isIncreasing(vector<int> nums){
	for (int i = 1; i < nums.size(); i++)
		if (nums[i] <= nums[i - 1])
			return false;
	return true;
}
};