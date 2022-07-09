class Solution {
public:
    int countPoints(string r) {
      
        int  x=r.size();
        map<int,string>m;
        for(int i=0;i<x;i+=2)
        {
            m[r[i+1]-'0']+=r[i];
            
        }
        int k=219;
        int sum=0;
        for(int i=0;i<=9;++i)
        {
            
            string ans=m[i];
            set<int>s;
            for(int i=0;i<ans.size();++i)
            {

              s.insert(int(ans[i]));
            
            }
            int ans1=0;
            set<int>::iterator itr;
             for(itr=s.begin();itr!=s.end();++itr)
            {

             ans1+=*itr;
            
            }
            
            
          
            if( ans1==k)
            {
                sum++;
            }
            
            
        }
    
        return sum;
    }
};