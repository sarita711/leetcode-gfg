class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
       vector<int> ans, temp;
        int n;
        for(auto it:nums)
        {
            n = it;
            while(n)
            {
                temp.push_back(n%10);
                n/=10;
            }
            reverse(temp.begin(), temp.end());
            for(auto it:temp)
                ans.push_back(it);
            temp.clear();
        }
        return ans;
    }
};