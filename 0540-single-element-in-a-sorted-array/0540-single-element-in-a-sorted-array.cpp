class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       
        
        int x=nums.size();
        int ans;
        set<int>s;
        if(x==1)
        {

return nums[0];
}
     for(int i=0;i<x;i+=2)  
     {

   if(i!=x-1)
   {
     if(nums[i]!=nums[i+1])
     {
        ans=nums[i];
        break;
      }
       

   }
     
         else {

if(nums[i]!=nums[i-1])
{
ans=nums[i];
break;

}


}
         
         
       }
        
         return ans;
    }
};