class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
      int x=arr.size();
        vector<int>v1=arr;
        sort(arr.begin(),arr.end());
        set<int>s;
        int j=1;
        map<int,int>m;
        for(int i=0;i<x;++i)
        {
           s.insert(arr[i]);
        }
        vector<int>v;
        set<int>::iterator itr;
       for(itr=s.begin();itr!=s.end();++itr)
       {
           m[*itr]=j;
           j++;
       }
        vector<int>::iterator itr1;
        for(itr1=v1.begin();itr1!=v1.end();++itr1)
        {
            v.push_back(m[*itr1]);

        }
        return v;
    }
};