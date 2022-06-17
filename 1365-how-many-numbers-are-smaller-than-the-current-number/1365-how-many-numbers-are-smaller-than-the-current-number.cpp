class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       
        int x=nums.size();
        
        map<int,int>m;
        map<int,int>m1;
        int arr[x];
        for(int i=0;i<x;++i)
        {

m[nums[i]]++;
        arr[i]=nums[i];
        }
        int sum=0;
        sort(arr,arr+x);
        for(int i=0;i<x;++i)
        {
           if(m1.find(arr[i])==m1.end()){
            m1[arr[i]]=sum;
            sum+=m[arr[i]];
           }
        }
        vector<int>v;
        
        for(int i=0;i<x;++i)
        {

            v.push_back (m1[nums[i]]);
        }
        
        
        
        
        
        
        
        
        
        return v;
        
        
        
        
        
        
    }
};