class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
      int x=arr.size() ;
        sort(arr.begin(),arr.end());
        int s=arr[1]-arr[0];
        for(int i=1;i<x;++i)
        {
           if(s!=arr[i]-arr[i-1])
           {
               return false;
           }
        }
        return true;
    }
};