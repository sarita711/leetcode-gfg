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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode *temp1=head;
        ListNode *ans=head;
        ListNode *r=ans;
        temp1=temp1->next;
        int t=0;
        while(temp1!=NULL)
        {
            ListNode *temp=temp1;
            int sum=0;
            while(temp!=NULL && temp->val!=0)
            {
                sum+=temp->val;
                temp=temp->next;
                
            }
            ListNode *x=new ListNode(sum);
            r->val=sum;
            r=r->next;
            t++;
            temp1=temp->next;
        }
       // delete r;
        // head=head->next;
        r=head;
        while(t>1)
        {
            r=r->next;
            t--;
            
        }
        r->next=NULL;
        
        return head;
       
    }
};