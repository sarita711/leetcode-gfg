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
    int pairSum(ListNode* head) {
      int k=0;
        ListNode *temp1=head;
        
        
        while(temp1!=NULL)
        {

                   k++;
            temp1=temp1->next;
            

          }
        int arr[k];
        int i=0;
        temp1=head;
          while(temp1!=NULL)
        {
 arr[i]=temp1->val;
            i++;   
            temp1=temp1->next;
            

          }
         
        int ans;
       int mx=0;
        for(int i=0;i<(k)/2;++i)
        {

          mx=max(mx,arr[i]+arr[k-i-1]);

        }
   
        return mx;
        
        
        
        
    }
};