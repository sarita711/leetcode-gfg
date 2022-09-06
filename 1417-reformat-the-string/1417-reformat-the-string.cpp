class Solution {
public:
    string reformat(string s) {
      if(s.size()==1)return s;
        char charr[s.size()];
        bool p=true;
        int num[s.size()],k=0,l=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0'&&s[i]<='9')
               num[k++]=s[i]-'0';
            if(s[i]>='a'&&s[i]<='z')
                charr[l++]=s[i];
        }
        if(l==0||k==0||abs(k-l)>1)return "";
        if(k<l)p=false;   
        l=k=0;
        for(int i=0;i<s.size();i+=2)
        {
            if(p)
            {
                s[i]=num[l++]+'0';
                if(i+1<s.size())
                    s[i+1]=charr[k++];  
            }
            else
            {
                s[i]=charr[l++];
                if(i+1<s.size())
                    s[i+1]=num[k++]+'0';
            }
        }
        return s;
    }
};