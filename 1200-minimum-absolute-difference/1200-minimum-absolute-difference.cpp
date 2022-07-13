class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
    sort(arr.begin(), arr.end());
        
        vector<vector<int>> ans;
        
        vector<int> temp;
        
        int minNum = INT_MAX;
        
        for (int i =0; i<arr.size()-1; i++){
            int j = i+1;
            minNum = min(arr[j]-arr[i],minNum);
        }
        
        int i = 0;
        int j = 1;
        
        while (j<arr.size()){
            
            if ( arr[j]-arr[i] == minNum ){
                
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                
                ans.push_back(temp);
                
                temp.clear();
                
            }
            
            i= j;
            j++;
            
        }
        
        return ans;

    }
};