class Solution {
public:
    int finalValueAfterOperations(vector<string>& s) {
       
        int x=s.size();
        
        char c;
        int sum=0;
        
        for(int i=0;i<x;++i)
        {
            
            if(s[i]=="--X")
            {


              sum--;
            
            }
            else if(s[i]=="++X")
            {


sum++;

            }
             else if(s[i]=="X--")
            {


sum--;

            }
             else if(s[i]=="X++")
            {
sum++;



            }
            
        }
        return sum;
        
        
        
    }
};