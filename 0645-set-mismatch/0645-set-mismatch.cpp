class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int x=nums.size();
        int arr[x+1];
        vector<int>v;
        
        for(int i=0;i<x+1;++i)
        {


            arr[i]=0;
            



          }
        for(int i=0;i<x;++i)
        {
            
            arr[nums[i]]++;



          }
        
        for(int i=1;i<x+1;++i)
        {



if(arr[i]==2){

v.push_back (i);


}
   
        }

  
        for(int i=1;i<x+1;++i)
        {




       if(arr[i]==0){


v.push_back (i);
}
        }

return v;
    }
};