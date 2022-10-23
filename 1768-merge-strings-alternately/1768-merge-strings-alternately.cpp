class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int x1=w1.size();
        int x2=w2.size();
        
        int i=0;
        int j=0;
        string ans;
        int k=0;
        while(i<x1 && j<x2 )
        {
            if(k%2==0)
            {   
                ans+=w1[i];
                i++;

            }
            else{
                ans+=w2[j];
                j++;
            }
             
         k++;
        
        }
        for(int k1=i;k1<x1;++k1)
        {
            ans+=w1[k1];
        }
         for(int k2=j;k2<x2;++k2)
        {
            ans+=w2[k2];
        }
        
        return ans;
    }
};