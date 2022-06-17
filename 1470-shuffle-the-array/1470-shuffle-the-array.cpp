class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
     int arr1[n];
        int arr2[n];
        
        for(int i=0;i<2*n;++i)
        {
               if(i<n)
               {

                 arr1[i]=nums[i];
               }
            else {

                   arr2[i-n]=nums[i];


             }

        }
        int k1=0;
        int k2=0;
         for(int i=0;i<2*n;++i)
         {
             
             if(i%2==0)
             {

            nums[i]=arr1[k1];
                 k1++;
             }
            else {

                 nums[i]=arr2[k2];
                k2++;

            }
         
         }
         
         return nums;
         
         
         
         }
        
        
        
};