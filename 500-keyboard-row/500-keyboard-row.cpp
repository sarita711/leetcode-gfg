class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1 = "qwertyuiopQWERTYUIOP";
        string s2 = "asdfghjklASDFGHJKL";
        string s3 = "zxcvbnmZXCVBNM";
        map<char,int> m;
        for(int i =0;i<s1.length();i++)m[s1[i]]=0;
         for(int i =0;i<s2.length();i++)m[s2[i]]=1;
         for(int i =0;i<s3.length();i++)m[s3[i]]=2;
        
        vector<string> ans;
        int flag =1;
        for(int i = 0 ;i<words.size();i++){
           flag = 1; 
           for(int j = 0;j<words[i].length()-1;j++){
            if(m[words[i][j]]!=m[words[i][j+1]]){
                flag = 0;
                break;
            }   
           }
            if(flag==1) ans.push_back(words[i]);
        }
        return ans;
            
    }
};