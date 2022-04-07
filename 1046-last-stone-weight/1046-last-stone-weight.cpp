class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        sort(stones.rbegin(),stones.rend());
        int ans=0;
        int x=stones.size();
        
     
        priority_queue<int>q;
        
        for(int i=0;i<x;++i)
        {


q.push(stones[i]);
       }
        
        while(q.size()>1)
        {


            int x=q.top();
            q.pop();
            int y=q.top();
            
            q.pop();
            
            if(x>y)
            {
                x=x-y;
                q.push(x);

             }
            if(x==y)
            {

              q.push(x);
                q.push(y);
                q.pop();
                q.pop();

               }
            
          

       }
        if(q.size()==0)
        {

            return 0;

           }
        return q.top();
        
        
    }
};