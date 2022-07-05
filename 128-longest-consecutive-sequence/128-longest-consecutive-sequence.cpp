class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        
        sort(nums.begin(),nums.end());
        
        set<int>s;
        set<int>::iterator itr;
        int mx=0;
        int ans=1;
        for(int i=0;i<nums.size();++i)
        {
            s.insert(nums[i]);
    
        }
        itr=s.begin();
        int prev=*itr;
        itr++;
        while(itr!=s.end())
        {
            if(prev==*itr-1)
            {
                cout<<prev<<" ";
             ans++;
                              
            }
            else{
                mx=max(ans,mx);
               
                ans=1;
            }
              prev=*itr;
           itr++; 
        }
       cout<<endl;
        return max(ans,mx);
    }
};