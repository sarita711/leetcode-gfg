class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int x=nums.size();
        
        vector<int>v;
        long long ans=1;
        int cnt=0;
        for(int i=0;i<x;i++)
        {
            if(nums[i]!=0){
             ans=ans*nums[i];
            }
            else{
                cnt++;
            }
        }
        if(cnt==0)
        {
            for(int i=0;i<x;++i)
            {
                v.push_back(ans/nums[i]);
            }
        }
        else if(cnt==1)
        {
            for(int i=0;i<x;++i)
            {
                if(nums[i]==0)
                {
                    v.push_back(ans);

                }
                else{
                    v.push_back(0);
                }
            }

        }
        else if(cnt>=2){
            for(int i=0;i<x;++i)
            {
                   v.push_back(0);
            }
        
        }
     
       
        return v;
        
    }
};