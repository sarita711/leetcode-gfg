class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>v;
        int i=1;
        while(i<=n)
        {
            bool val1=false;
            bool val2=false;
            
            int k1=i;
            int k2=n-i;
            while(k1>0)
            {
                if(k1%10==0)
                {
                    val1=true;
                }
                k1=k1/10;

            
            }
            while(k2>0)
            {
                if(k2%10==0)
                {
                    val2=true;
                }
                k2=k2/10;

            
            }
            if(val1==false && val2==false)
            {
                v.push_back(i);
                v.push_back(n-i);
                break;
                
            }
            i++;
                
        }
        return v;
    }
};