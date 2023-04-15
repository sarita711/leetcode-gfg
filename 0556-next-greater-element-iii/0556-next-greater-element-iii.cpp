class Solution {
public:
    int nextGreaterElement(int n) {
        #include <bits/stdc++.h> 
   
    vector<int>v;
    int temp=n;
    while(temp>0)
    {
        v.push_back(temp%10);
        temp=temp/10;
    }
    
    reverse(v.begin(),v.end());
    int i=v.size()-1;
     while(i>=1 && v[i-1]>=v[i] )
     {
      i--;
     }

      if(i==0)
         return -1;
   
       int index=0;
     for(int j=i-1;j<v.size();j++)
     {
        if(v[j]>v[i-1])
        {
            index=j;
        }
     }
     swap(v[index],v[i-1]);
     sort(v.begin()+i,v.end());
     long long int ans=0;
     for(int k=0;k<v.size();k++)
     {
         ans=ans*10+v[k];
     }
        if(ans>INT_MAX || ans<INT_MIN)return -1;
     if(ans>n)return ans;
     return -1;
   

    }
};