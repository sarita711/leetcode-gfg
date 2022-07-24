class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
      /*  int x=mat.size();
        int x1=mat[0].size();
      if(mat[0][0] >t || mat[x-1][x1-1]<t)
        {
            return false;
        }
        int i1=-1;
        int j1=-1;
        
        for(int i=0;i<mat[0].size();++i)
        {
            
            if(mat[0][i] >t)
            {
                break;
                
            }
            else if(mat[0][i]==t)
            {
                return true;
            }
            else{
                i1=i;
            }
            
            
        }
         for(int j=0;j<mat.size();++j)
        {
            
            if(mat[j][0] >t)
            {
                break;
                
            }
            else if(mat[j][0]==t)
            {
                return true;
            }
            else{
                j1=j;
            }
            
            
        }
        
        for(int i=0;i<=j1;++i)
        {
            if(mat[i][i1]==t)
            {
                return true;
            }
           
  
        }
         for(int j=0;j<=i1;++j)
        {
            if(mat[j1][j]==t)
            {
                return true;
            }
            
  
  
        }
        
        return false;*/
         int m = mat.size();
        int n = mat[0].size();
        
        int i = m - 1;
        int j = 0;
        
        while (i>=0 && j<n){
            
            if (mat[i][j] == t) return true;
            
            else if (mat[i][j] < t) j++;
            
            else i--;
        }
        return false;
        
    }
};