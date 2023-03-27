class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int x =arr.size();
        if(x<3)return false;
        vector<int>v1;
        vector<int>v2;
        vector<int>v3;
        vector<int>v4;
       
        int i=1;
        while(arr[i]>=arr[i-1] && i<x)
        {
            if(arr[i]==arr[i-1])return false;
            v1.push_back(arr[i-1]);
            i++;
        }
        if(i==x ||v1.size()==0)return false;
      
      
        while(i<x)
        {   if(arr[i]==arr[i-1])return false;
            v2.push_back(arr[i]);
            i++;
        }
        v3=v1;
        v4=v2;
        sort(v3.begin(),v3.end());
        sort(v4.begin(),v4.end());
        
        reverse(v4.begin(),v4.end());
        
        if(v1==v3 && v4==v2)
        {
            return true;
        }
        return false;
    }
};