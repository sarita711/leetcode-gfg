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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
         ListNode *curr=head;
        ListNode *temp=head;
        ListNode *exp=head;
        
        int k=right-left+1;
        int a[k];
        int i=0;
        int j=0;
        while(curr!=NULL)
        {

if(j>=left-1 && j<=right-1)
{
a[i]=curr->val;
  i++;


}
            j++;
            curr=curr->next;



        }
        int o=0;
        int p=0;
        while(temp!=NULL)
        {
            
            if(o>=left-1 && o<=right-1)
            {

                temp->val=a[i-p-1];
                p++;


             }
o++;
            temp=temp->next;


      }
        
        return head;
    
        
    }
};