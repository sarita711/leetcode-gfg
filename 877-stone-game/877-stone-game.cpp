class Solution {
public:
    bool stoneGame(vector<int>& p) {
        int x=p.size();
        
        int sum1=0;
        int sum2=0;
        
        for(int i=0;i<p.size();++i)
        {
             if(i%2==0)
             {
                 sum1+=p[i];
             }
            else{
                sum2+=p[i];
            }
        
        
        }
         int sum3=0;
        int sum4=0;
        
        for(int i=0;i<p.size();++i)
        {
             if((x-i-1)%2!=0)
             {
                 sum3+=p[x-i-1];
             }
            else{
                sum4+=p[x-i-1];
            }
        
        
        }
        
        
        
        return (sum1>sum2) || (sum3>sum4);
    }
};