class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        int x1=arr1.size();
        int x2=arr2.size();
        
       int sum=0;
        
        for(int i=0;i<x1;++i)
        {
             int ans=0;
             for(int j=0;j<x2;++j)
             {
                 
                 if(abs(arr1[i]-arr2[j])<=d)
                 {
                     ans++;
                 }
             }
            if(ans==0)
            {sum++;}
            
        }
        
        return sum;
    }
};