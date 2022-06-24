class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int x=heights.size();
        
        int arr[x];
        for(int i=0;i<x;++i)
        {

           arr[i]=heights[i];
            

        }
        sort(arr,arr+x);
        int ans=0;
        for(int i=0;i<x;++i)
        {
            if(arr[i]!=heights[i])
            {
               ans++;

            }

        }
        
        return ans;
    }
};