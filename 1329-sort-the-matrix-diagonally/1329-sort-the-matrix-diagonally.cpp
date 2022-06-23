class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
       
     int m = mat.size();
        int n = mat[0].size();


        for(int x = 0; x < m - 1; ++x){
            bool ok = true;
            for(int y = 0; y < n - 1; ++y){
                if(mat[x][y] > mat[x + 1][y + 1]){
                    int tmp = mat[x][y];
                    mat[x][y] = mat[x + 1][y + 1];
                    mat[x + 1][y + 1] = tmp;
                    ok = false;
                }
            }
            if(!ok){
                x = -1;
                ok = true;
            }
        }
        return mat;
  }
};