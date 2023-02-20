class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        
        
        
        int x=-1;
        
        int l=0;
        int h=nums.size();
        int m;
        
      /*  while(l<=h)
        {
      
          m=(l+h)/2;
            
            if(nums[m]==target )
            {
x==m;

}
            else if(target >nums[m]) {

                l=m+1;

}
            else {
h=m-1;


}



}*/
             
        
        for(int i=0;i<nums.size();i++)
        {

   if(nums[i]==target)

   {
       x=i;
       break;


}


        }
        
if(x==-1)        
        
{
   
  for(int i=0;i<nums.size();i++)
  {

      
if(nums[i]>target)
{
x=i;
    break ;

}
   else {
x=nums.size();


   }   
      
    
    

           
           


}
    
    
    


}
        
return x;
        
        
        
        
        
        
        
        
    }
};