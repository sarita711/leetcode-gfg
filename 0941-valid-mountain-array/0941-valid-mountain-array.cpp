class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int x =arr.size();
        if(x<3)return false;
        
       
        int i=1;
        while(i<x && arr[i]>=arr[i-1])
        {
            if(arr[i]==arr[i-1])return false;
            
            i++;
        }
        if(i==x || i==1)return false;
      
      
        while(i<x && arr[i]<=arr[i-1] )
        {   if(arr[i]==arr[i-1])return false;
          
            i++;
        }
       if(i!=x)return false;
        return true;
    }
};