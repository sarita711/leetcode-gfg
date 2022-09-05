class Solution {
public:
    string reverseParentheses(string s) {
       
           stack<string> stk;
        string res = "";
        for(auto ch : s){
            if(ch == '('){
                stk.push(res);
                res = "";
            }else if(ch == ')'){
                reverse(res.begin(),res.end());
                res = stk.top()+res;
                stk.pop();
            }else{
                res+=ch;
            }
        }
        return res;
    }
};