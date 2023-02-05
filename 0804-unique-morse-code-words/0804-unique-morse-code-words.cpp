class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& w) {
    
        vector<string> hash={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
       set<string>s;
        int x =  w.size();
        for(int i=0;i<x;i++)
        {

            string k = w[i];
            string ans;
            for(int j=0;j<k.size();j++)
            {
                ans+=hash[k[j]-97];
            }
            cout<<ans<<" ";
            s.insert(ans);
        
        }
        
           return s.size();
           
           
           
           
        
    }
};