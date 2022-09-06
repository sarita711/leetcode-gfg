class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> res;
        int depth = -1;
        for(auto s : seq) {
            if(s == '(') {
                depth++;
                res.push_back(depth%2);
            } else if(s == ')') {
                res.push_back(depth%2);
                depth--;
            }
        }
        return res; 
    }
};