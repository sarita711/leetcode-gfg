class Solution {
public:
    //	JUST REMEMBER THAT TO MAKE A SQUARE FROM A POINT YOU WANT A RIGHT,DIAGNOL AND A BOTTOM POINT. 

int maxi=0;
// //RECURSIVE SOLN.(TLE)
int solve(vector<vector<char>>& matrix, int i, int j, int n, int m)
{
    if(i>=n||j>=m)
        return 0;
    
    int right=solve(matrix,i,j+1,n,m);
    int diag=solve(matrix,i+1,j+1,n,m);
    int bottom=solve(matrix,i+1,j,n,m);
    
    if(matrix[i][j]=='1')
    {
        maxi=max(maxi, 1+min(right,min(diag,bottom)));  //storing max is a major step we can't just return the below
        return 1+min(right,min(diag,bottom));
    }
    else 
    {
        return 0;
    }
    
}
// //MEMOIZATION METHOD
int solveMem(vector<vector<char>>& matrix, int i, int j, int n, int m, vector<vector<int>> &dp)
{
    if(i>=n||j>=m)
        return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    
    int right=solveMem(matrix,i,j+1,n,m,dp);
    int diag=solveMem(matrix,i+1,j+1,n,m,dp);
    int bottom=solveMem(matrix,i+1,j,n,m,dp);
	
    if(matrix[i][j]=='1')
    {
        dp[i][j]=1+min(right,min(diag,bottom));
        maxi=max(maxi,dp[i][j]);
        return dp[i][j];
    }
    else 
    {
        return 0;
    }
}

// //TABULATION METHOD 
void solveTab(vector<vector<char>>& matrix, int i, int j, int n, int m)
{
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            int right=dp[i][j+1];
            int diag=dp[i+1][j+1];
            int bottom=dp[i+1][j];
            if(matrix[i][j]=='1')
            {
                dp[i][j]=1+min(right,min(diag,bottom));
                maxi=max(maxi,dp[i][j]);
            }
            //As for all the 0 cases we've already filled 0, we don't have to write extra else condiiton this makes the code much faster
        }
    }
}
//SPACE OPTIMIZATION
void solveSO(vector<vector<char>>& matrix, int n, int m)
{
    
    vector<int>prev(m+1,0); 
    vector<int>cur(m+1,0);
    for(int i=n-1;i>=0;i--)
    {
        fill(cur.begin(), cur.end(), 0);  //u could also have declared the cur array again or instead wrote a else condition assigning 0 value to cur[j] but this is the fastest method i could get :)
        for(int j=m-1;j>=0;j--)
        {
            if(matrix[i][j]=='1')
            {
                cur[j]=1+min(cur[j+1],min(prev[j+1],prev[j]));
                maxi=max(maxi,cur[j]);
            }
            
        }
        prev=cur;
    }
}

int maximalSquare(vector<vector<char>>& matrix) {
    int n=matrix.size(); int m=matrix[0].size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    // solve(matrix,0,0,n,m);
    // solveMem(matrix,0,0,n,m,dp);
    // solveTab(matrix,0,0,n,m);
   solveSO(matrix,n,m);
     return maxi*maxi;
}
};