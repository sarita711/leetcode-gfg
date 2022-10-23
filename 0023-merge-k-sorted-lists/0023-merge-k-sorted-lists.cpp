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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int x=lists.size();
        vector<int>v;
        
        ListNode *temp1;
       
         
         ListNode *prev;
        int j=0;
        for(int i=0;i<x;i++)
        {
            if(lists[i]!=NULL)
            {
                temp1=lists[i];
                 while(temp1->next!=NULL)
              {
                  v.push_back(temp1->val);
                  temp1=temp1->next;

              }
             v.push_back(temp1->val);
             prev=temp1;
                j=i;
                break;
                
            
            }

        
        
        }
        if(j==x)
        {
            
            return NULL;
        }
            
              
        for(int i=j+1;i<x;i++)
        {
            if(lists[i]!=NULL){
            prev->next=lists[i];
              while(lists[i]!=NULL && lists[i]->next!=NULL)
              {
                  v.push_back(lists[i]->val);
                  lists[i]=lists[i]->next;

              }
            v.push_back(lists[i]->val);
            prev=lists[i];
            }
              
        }
        
        sort(v.begin(),v.end());
        ListNode *temp=lists[j];
     
        vector<int>::iterator itr;
        for(itr=v.begin();itr!=v.end();++itr)
        {
            if(temp!=NULL){
              temp->val=*itr;
              temp=temp->next;
            }
        }
        return lists[j];
        
        
    }
};