class Solution {
public:
    string makeGood(string s) {
        stack<char>s1;
        string k;
        int x=s.size();
        s1.push(s[0]);
        map<char,int>m1;
        map<char,int>m2;
       
        for(int i=1;i<x;++i)
        {
           if( s1.empty()==false && ((s[i]-'0'-32==s1.top()-'0')|| (s[i]-'0'==s1.top()-'0'-32)))
           {
               s1.pop();
               
           }
            else{
                s1.push(s[i]);
            }
        }
    
        stack<int>s2;
        while(s1.empty()==false)
        {
            s2.push(s1.top());
            s1.pop();
        }
        
        while(s2.empty()==false)
        {
            k+=s2.top();
            s2.pop();
            
        }
        return k;
        
    }
};