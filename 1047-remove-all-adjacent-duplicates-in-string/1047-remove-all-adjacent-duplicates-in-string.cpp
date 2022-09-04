class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>s1;
        
        s1.push(s[0]);
        
        int x=s.size();
        for(int i=1;i<x;++i)
        {
             
              if(s1.empty()==false && s1.top()==s[i])
              {
                  s1.pop();
              }
              else{
                  s1.push(s[i]);
              }
          
        }
        stack<char>s2;
        while(s1.empty()==false)
        {
            s2.push(s1.top());
            s1.pop();
        }
        string k;
        while(s2.empty()==false)
        {
            k+=s2.top();
            s2.pop();
        }
       
        return k;
     
    }
};