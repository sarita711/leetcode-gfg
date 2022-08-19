class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
      
        vector<int>v;
        
        for(int i=0;i<arr.size();++i)
        {

               if(arr[i]!=0)
               {
                v.push_back(arr[i]);
               }
               if(arr[i]==0)
               {
                   v.push_back(0);
                   v.push_back(0);
                   
                   
               }
        
        
        }
        
        vector<int>::iterator itr;
        int i=0;
        itr=v.begin();
        
        while(i<arr.size())
        {
            arr[i]=*itr;
            itr++;
            i++;
       
        }
        
        
        
        
        
    }
};