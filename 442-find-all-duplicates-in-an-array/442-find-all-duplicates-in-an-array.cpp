class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int>v;
        
    map<int,int>m;
        
        for(int i=0;i<nums.size();++i)
        {

              m[nums[i]]++;


       
        
        
        }
        
        for(int i=0;i<=nums.size();++i)
        {


             if(m[i]>1)
             {

v.push_back (i);




             }
        
        
}
        return v;
        
    }
};