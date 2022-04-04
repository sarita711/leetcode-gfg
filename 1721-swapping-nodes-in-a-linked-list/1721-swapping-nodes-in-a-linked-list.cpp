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
    ListNode* swapNodes(ListNode* head, int k) {
        
      
        
        ListNode *temp1 =head;
        
    int j=0;
        while (temp1!=NULL)
        {
            
            j++;
            temp1=temp1->next;

        }
        
        ListNode *temp2=head;
        int m1,m2;
        int g=j-k;
        int h=0;
        
        while(temp2!=NULL)
        {
  if(h==k-1)
  {

      m1=temp2->val;




}
   if(h==g)
  {

      m2=temp2->val;




}           
           
   h++;
            temp2=temp2->next;




       }
        
        
        ListNode *temp=head;
        
        
        int l=0;
        
        while(temp!=NULL)
        {
          
            
            if(l==k-1)
            {


temp->val=m2;


             }
            if(l==g)
            {
temp->val=m1;




            }


l++;
            temp=temp->next;


         }
        return head;
    }
};