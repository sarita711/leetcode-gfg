class Solution {
public:
    int memo[38]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int tribonacci(int n) {
        
        if(n==0)
        {
            memo[0]=0;
return 0;

        }
        else if(n==1 || n==2 )
        {
memo[1]=1;
            memo[2]=2;
return 1;


        
        }
        else {

if(memo[n]==-1){
memo[n]= tribonacci(n-3)+tribonacci(n-1)+tribonacci(n-2);
return memo[n];
}
            else {

return memo[n];

}

}
     return 0;   
        
        
    }
};