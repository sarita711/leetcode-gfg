class Solution {
public:
    vector<string> commonChars(vector<string>& wd) {
       
        map<char,int>m;
        string k1=wd[0];
        for(int i=0;i<wd[0].size();++i)
        {
            
            m[k1[i]]++;
            
            
        }
        int x=wd.size();
        for(int i=1;i<x;++i)
        {
            string k=wd[i];
            map<char,int>m1;
            for(int j=0;j<k.size();++j)
            {
               m1[k[j]]++;
               
            }
             for(int j=0;j<k1.size();++j)
            {
               m[k1[j]]=min(m1[k1[j]],m[k1[j]]);
                 
            }
           
            
        }
        vector<string>v;
       
        for(int i=0;i<k1.size();++i)
        {
            if(m[k1[i]]!=0)
            {
                v.push_back (string(1,k1[i]));
                 m[k1[i]]--;
                
            }
            
        }
        sort(v.begin(),v.end());
       
        return v;
    }
};