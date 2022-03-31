class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int x=nums.size();
        
        vector<int>v;
        
        for(int i=0;i<x;++i)
        {

           v.push_back (nums[i]);


          
        }
          for(int i=x;i<x+x;++i)
        {

           v.push_back (nums[i-x]);


          
        }
        return v;
    }
};