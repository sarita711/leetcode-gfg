class Solution {
public:
    int memo[46]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
 
    int climbStairs(int n) {
    
 int res;
        
        if(n==0 || n==1)
        {
             return 1;
             memo[0]=1;
            memo[1]=1;

         }
        else {

if(memo[n]==-1){
res=climbStairs(n-1)+climbStairs(n-2);
            memo[n]=res;
}
            else{
res=memo[n];
}

         }
        return res;
       


         
      
    }
};