class Solution {
public:
    string kthDistinct(vector<string>&arr, int k) {
       int j=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(count(arr.begin(),arr.end(),arr[i])==1 && k==++j)
        {
                return arr[i];
        }
    }
    return "";
    }
};