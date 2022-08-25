class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int x1=ransomNote.size();
        int x2= magazine.size();
        
        map<int,int>m1;
        map<int,int>m2;
        
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(), magazine.end());
        for(int i=0;i<x1;++i)
        {

          m1[(ransomNote[i]-'0')]++;
        
        }
         
        for(int i=0;i<x2;++i)
        {
           m2[(magazine[i]-'0')]++;
  
        }
        int j=0;
        for(int i=0;i<x1;++i)
        {
          
            if(m1[(ransomNote[i]-'0')]<=m2[(ransomNote[i]-'0')])
            {
j++;

              }
else {
return false;


}
  }
        
        
       return true; 
      
    }
};