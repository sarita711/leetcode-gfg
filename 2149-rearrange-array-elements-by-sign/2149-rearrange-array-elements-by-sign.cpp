class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int x=nums.size();
        
         vector<int>v1;
        vector<int>v2;
        
        vector<int>::iterator itr1;
        vector<int>::iterator itr2;
        
        
        for(int i=0;i<x;++i)
        {

                 if(nums[i]>=0)
                 {

                     v1.push_back (nums[i]);


                         }
            else {

                       v2.push_back (nums[i]);


                      }





           }
        
        itr1=v1.begin();
        itr2=v2.begin();
        for(int i=0;i<x;++i)
        {

           if(i%2==0)
           {
nums[i]=*itr1;
            itr1++;   


            }
            else if(i%2!=0)
            {


              nums[i]=*itr2;
                itr2++;

            
            }






}
        
     return nums;   
    }
};