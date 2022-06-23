class Solution {
public:
    int findLucky(vector<int>& arr) {
       
        map<int,int>m;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();++i)
        {

          m[arr[i]]++;
        
        
        }
        int s=m[arr[0]];
        int ans=-1;
        for(int i=0;i<arr.size();++i)
        {
            if(arr[i]==m[arr[i]]  )
            {
                 ans=arr[i];

            }
        
        }
        return ans;
 }
};