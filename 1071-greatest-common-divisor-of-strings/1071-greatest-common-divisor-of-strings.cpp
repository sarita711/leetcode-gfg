class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
       /* string ans = "";
        
        int x1=str1.size();
        int x2=str2.size();
        
        int i=0;
        int j=0;
        string k;
        int k1=0;
        map<int,char>m;
        while(i<x1 && j<x2)
        {
            m[str2[j]]++;
            if(str1[i]==str2[j] && m[str2[j]]==1)
            {
                k+=str1[i];
                i++;
                j++;
               
            }
            else{
                 
                m.clear();
                k1++;
                i=k1;
                j=0;
               
                 if(k.size()>ans.size() )
               {
               int y1=k.size();
               bool val =false;
               for(int l1=0;l1<x1-y1;l1+=y1)
               {
                   if(k!=str1.substr(l1,y1))
                   {
                       val=true;}
                }
                for(int l1=0;l1<x2-y1;l1+=y1)
                {
                   if(k!=str2.substr(l1,y1))
                   {
                       val=true;}
                }
               if(val == false)
               {
                   ans = k;
               }
                k.clear();
               
            }
          
           }
        }
        return ans;*/
            if (str1 + str2 != str2 + str1) {
            return "";
        }

        int gcdLength = gcd(str1.size(), str2.size());
        return str1.substr(0, gcdLength);
    }
};