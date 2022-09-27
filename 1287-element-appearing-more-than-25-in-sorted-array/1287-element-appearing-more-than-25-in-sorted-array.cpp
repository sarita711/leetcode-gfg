class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int x=arr.size();
        map<int,int>m;
        
        for(int i=0;i<x;++i)
        {
            m[arr[i]]++;

        }
        int x1=.25*x;
        int ans=0;
        for(int i=0;i<x;++i)
        {
           if(x1<m[arr[i]])   
           {
             return arr[i];
           }
         
        }
        return ans;
        
    }
};