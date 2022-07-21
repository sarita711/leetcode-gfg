/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       vector<int>s1;
        vector<int>s2;
        vector<int>::iterator itr1;
        vector<int>::iterator itr2;
        
        ListNode* t1=l1;
        ListNode* t2=l2;

        while(t1!=NULL)
        {
            s1.push_back (t1->val);
            t1=t1->next;
        }
        
        while(t2!=NULL)
        {
            s2.push_back (t2->val);
            t2=t2->next;
        }
        int temp=0;
        itr1=s1.begin();
        itr2=s2.begin();
        
        stack<int>s;
        while(itr1!=s1.end() && itr2!=s2.end())
        {
            
              s.push((*itr1+*itr2+temp)%10);
              cout<<(*itr1+*itr2+temp)%10;
            
              temp=(*itr1+*itr2+temp)/10;
            itr1++;
            itr2++;
          
        }
       
            while(itr2!=s2.end() )
            {
              
             s.push((*itr2+temp)%10);
            cout<<(*itr2+temp)%10;
             temp=(*itr2+temp)/10;
            itr2++;
            
            }
            while(itr1!=s1.end())
            {
              
                          s.push((*itr1+temp)%10);
              temp=(*itr1+temp)/10;
                 cout<<(*itr1+temp)%10;
            itr1++;
            
            }
        
        if(temp!=0)
        {
            s.push(temp);
            cout<<(temp)%10;
        }
        stack<int>q;
        while(s.empty()==false)
        {
            q.push(s.top());
            s.pop();
        }
    
        ListNode* ans=l1;
      
        while(ans->next!=NULL && q.empty()==false )
        {
            ans->val=q.top();
            q.pop();
            ans=ans->next;
        }
        if(q.empty()==false){
        ans->val=q.top();
        q.pop();}
        while(q.empty()==false)
        {
             ListNode* new_node = new ListNode(); 
  

    new_node->val = q.top(); 
  
   
    ans->next=new_node;
            ans=ans->next;
  q.pop();
 
        }
        
        
        return l1;
        
    }
};