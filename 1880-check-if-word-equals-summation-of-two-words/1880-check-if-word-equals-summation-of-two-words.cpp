class Solution {
public:
    bool isSumEqual(string f, string s, string t) {
        int x1=f.size();
        int x2=s.size();
        int x=t.size();
        
        int f1=0,f2=0,ans=0;
        
        for(int i=0;i<x1;++i)
        {
            
            f1=f1*10+int(f[i])-97;
        
        
        }
        
        for(int j=0;j<x2;++j)
        {

             f2=f2*10+int(s[j])-97;
        
        
        }
        
        for(int k=0;k<x;++k)
        {

         ans=ans*10+int(t[k])-97;
        
        
        }
        cout<<f1<<" ";
        cout<<f2<<" ";
        cout<<ans<<" ";
        return f1+f2==ans;
        
        
    }
};