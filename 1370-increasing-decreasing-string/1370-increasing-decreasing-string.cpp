class Solution {
public:
    string sortString(string s) {
        vector<int>s1;
        int x = s.size();
        map<int,char>m;
        map<int,char>m1;
        for(int i=0;i<x;i++)
        {
            
            m[s[i]]++;
            m1[s[i]]++;
        }
        int t=s.size();
        for(int i=0;i<x;i++)
        {
            if(m1[s[i]]!=0){
            s1.push_back(s[i]);
                m1[s[i]]=0;
                }
            
        }
        bool val=false;
       
        string ans;
        while(t>0)
        {
            if(val==false)
            {
                vector<int>::iterator itr;
                sort(s1.begin(),s1.end());
                itr=s1.begin();
                while(itr!=s1.end())
                {
                    if(m[char(*itr)]!=0)
                    {
                        ans+=char(*itr);
                        m[char(*itr)]--;
                        t--;
                    }
                    itr++;
                }
                val=true;
                
            }
            else{
                
                vector<int>::iterator itr;
                sort(s1.rbegin(),s1.rend());
                itr=s1.begin();
                while(itr!=s1.end())
                {
                    if(m[char(*itr)]!=0)
                    {
                        ans+=char(*itr);
                        m[char(*itr)]--;
                        t--;
                    }
                    itr++;
                }
                val=false;
                
                
                
            }
            
        }
        return ans;
        
    }
};