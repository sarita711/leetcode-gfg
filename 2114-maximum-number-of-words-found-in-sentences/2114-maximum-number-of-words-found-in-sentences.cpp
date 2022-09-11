class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       
        int ans=0;
for(int i=0; i<sentences.size(); i++){
string temp=sentences[i];
int tempAns=count(temp.begin(),temp.end(),' ');
ans=max(ans,tempAns+1);
}
return ans;

        }
        
    
};