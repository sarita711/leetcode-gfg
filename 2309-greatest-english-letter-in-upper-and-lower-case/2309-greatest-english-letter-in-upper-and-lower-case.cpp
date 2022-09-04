class Solution {
public:
    string greatestLetter(string s) {
       
vector<int> sm(26,0);
vector<int> lar(26,0);
string ans="";
for(int i=0;i<s.size();i++){
char ch=s[i];
if(ch-'a'>=0 && ch-'a'<26)
sm[ch-'a']=1;
else if(ch-'A'>=0 && ch-'A'<26)
lar[ch-'A']=1;
}
for(int i=25;i>=0;i--){
if(sm[i]==1 && lar[i]==1){
ans+=char(i+'A');
break;
}
}
return ans;
 
        
    }
};