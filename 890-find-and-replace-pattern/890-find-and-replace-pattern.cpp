class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& w, string p) {
       
        map<char,int>m;
        for(int i=0;i<p.size();++i)
        {
            m[p[i]]++;
        }
        vector<string>s;
        
        for(int i=0;i<w.size();++i)
        {
            
            string k=w[i];
            map<char,int>m1;
            map<char,char>m2;
            for(int j=0;j<k.size();++j)
            {
                
                m1[k[j]]++;
                m2[k[j]]=p[j];
           
            }
            int h=0;
            string an;
            for(int j=0;j<p.size();++j)
            {
                if(m1[k[j]]==m[p[j]])
                {
                    an+=m2[k[j]];
                    h++;
                }
            }
            
            if(h==k.size() && an==p)
            {
                
                s.push_back (k);
                
            }
            
            
            
        }
        
        
        return s;
        
    }
};