class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
       vector<int>v;
       int arr[s.size()];
       vector<int>v1;
        for(int i=0;i<s.size();++i)
        {
          arr[i]=100000;
        }
       for(int i=0;i<s.size();++i)
       { 
           
            if(s[i]==c)
            {

                v1.push_back(i);
            }
      }
      vector<int>::iterator itr;
      for(itr=v1.begin();itr!=v1.end();++itr)
      {
          for(int i=0;i<s.size();++i)
          {
               arr[i]=min(arr[i],abs(i-*itr));
          
          }

      }
       for(int i=0;i<s.size();++i)
        {
           v.push_back(arr[i]);
        }
        
        
        return v;
    }
};