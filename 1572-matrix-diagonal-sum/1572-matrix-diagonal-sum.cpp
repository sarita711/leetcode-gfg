class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int x=mat.size();
        int x1=mat[0].size();
        
        
        int sum=0;
         for(int i=0;i<x;++i)
         {

           sum+=mat[i][i];
             

         }
        int j=x-1;
        for(int i=0;i<x;++i)
        {
           if(i!=j){
            sum+=mat[i][j];}
            j--;
           
        
        
        }
      
    return sum;
    
    }


};