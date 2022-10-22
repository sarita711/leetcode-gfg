class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
       /* int x=nums.size();
         sort(nums.begin() , nums.end());    
        if(nums.size() < 3){    
            return {};
        }
        if(nums[0] > 0){      
            return {};
        }
        set<int>s;
        map<int,int>m3;
        for(int i=0;i<x;++i)
        {
            s.insert(nums[i]);
            m3[nums[i]];
        }
        
      
       
        map<vector<int>,int>m1;
        map<int,int>m;
       
        vector<vector<int>>v1;
        if(s.size()<=1)
        {
           vector<int>v;
            
                           v.push_back(nums[0]);
                           v.push_back(nums[0]);
                           v.push_back(nums[0]);
                            v1.push_back(v);
                            return v1;
        }
        
        for(int i=0;i<x;++i)
        {
          
          m[nums[i]]++;
        }
        for(int i=0;i<x;i++)
        {
           while(i<x)
           {
              
           
           }
           for(int j=i+1;j<x;j++)
           {

               int y=nums[i]+nums[j];
               
               
               if(m[-y]!=0)
               {
                   for(int k=j+1;k<x;k++)
                   {
                       if(nums[k]==-y)
                       {
                           vector<int>v;
                           v.push_back(nums[i]);
                           v.push_back(nums[j]);
                           v.push_back(nums[k]);
                           sort(v.begin(),v.end());
                            if(m1[v]==0){             
                           
                           
                           v1.push_back(v);}
                           m1[v]++;
                           
                       }
                       
                   }
               
               
               }
               
               
           }

        }
                
        return v1;
        
        
        
        
        
        */
             
                vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        for(int i = 0;i<arr.size();i++){
            if(i > 0 &&  arr[i] == arr[i-1]) continue;
            int l = i+1, r = arr.size()-1;
            vector<int> temp;
            while(l < r){
                if(arr[i] + arr[l] + arr[r] == 0){
                    temp.emplace_back(arr[i]);
                    temp.emplace_back(arr[l]);
                    temp.emplace_back(arr[r]);
                    ans.emplace_back(temp);
                    while(l < arr.size()-1 && arr[l] == arr[l+1]){
                        l++;
                    }
                    while(r > 1 && arr[r-1] == arr[r]){
                        r--;
                    }
                    r--;l++;
                }
                else if(arr[i] + arr[l] + arr[r] > 0) r--;
                else l++;
                temp.clear();
                
            }
        }
        return ans;

        
        
        
    }
};