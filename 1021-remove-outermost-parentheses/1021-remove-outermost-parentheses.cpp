class Solution {
public:
    string removeOuterParentheses(string s) {
       string res;
        int temp = 0;
        for (char c : s) {
            if (c == '(' && temp++ > 0) res += c;
            if (c == ')' && temp-- > 1) res += c;
        }
        return res;
        
    }
};