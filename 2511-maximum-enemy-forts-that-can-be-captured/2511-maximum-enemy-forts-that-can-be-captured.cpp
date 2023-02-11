class Solution {
public:
    int captureForts(vector<int>& forts) {
        
         int result = 0, x = 0; 
        for (int j = 0; j < forts.size(); j++) {
            if (forts[j]) {
                if (forts[x] == -forts[j]) result = max(result, j - x - 1); 
                x = j; 
            }
        }
        return result;
        
        
        
    }
};