class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        
        map<int,char>m1;
        map<char,int>m2;
        int x=ranks.size();
        
        for(int i=0;i<x;++i)
        {
            m1[ranks[i]]++;
            m2[suits[i]]++;
        }
        for(int i=0;i<x;++i)
        {
            if(m2[suits[i]]>=5){return "Flush";}
        }
         
          for(int i=0;i<x;++i)
        {
            if(m1[ranks[i]]>=3){return "Three of a Kind";}
        }
          for(int i=0;i<x;++i)
        {
            if(m1[ranks[i]]==2){return "Pair";}
        }
        
        
        return "High Card";
      
    }
};