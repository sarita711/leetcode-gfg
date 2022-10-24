class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int x=arr.size();
        int prev=0;
       
        map<int,int>m1;
        map<int,int>m2;
        set<int>s;
        for(int i=0;i<=x-1;++i)
        {
           m1[arr[i]]++;
            s.insert(arr[i]);
          
        }
        set<int>::iterator itr;
        for(itr=s.begin();itr!=s.end();++itr)
        {
            if(m2[m1[*itr]]!=0)
            {
                return false;
            }
        
            m2[m1[*itr]]++;
        }
        
        return true;
    }
};