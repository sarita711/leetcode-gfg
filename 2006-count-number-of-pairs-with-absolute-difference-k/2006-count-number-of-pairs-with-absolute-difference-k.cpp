class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
      
      /*  int x=nums.size();
        int sum=0;
        for(int i=0;i<x;++i)
            for(int j=i+1;j<x;++j)
                if(abs(nums[i]-nums[j])==k)
                    sum++;
        return sum;*/
         sort(nums.begin(), nums.end());
        int ans=0;
        if(nums.size()==1){
            if(k==nums[0]) return 1;
            else return 0;
        }
        
        map<int, int> mp;
        mp[nums[0]]++;
        for(int i=1;i<nums.size();i++){
            if(mp.find(nums[i]-k)!=mp.end()){
                
                ans+=mp[nums[i]-k];
                mp[nums[i]]++;
            }
            
         
            else mp[nums[i]]++;
        }
        
        return ans;
}
};