class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
      
        int x=nums.size();
       
       /* map<int,int>m1;
      
        int ans=0;
        for(int i=0;i<=200;++i)
        {
          m1[i]=0;
        
        }
        sort(nums.begin(),nums.end());
        for( int i=0;i<x;++i)
        {
       
         if(m1[abs(nums[i]-k)]!=0 && abs(k-nums[i])<nums[i])
         {
          ans+=m1[abs(nums[i]-k)];
             
         }
           m1[nums[i]]++;  

        }*/
        int sum=0;
        for(int i=0;i<x;++i)
            for(int j=i+1;j<x;++j)
                if(abs(nums[i]-nums[j])==k)
                    sum++;
        return sum;
}
};