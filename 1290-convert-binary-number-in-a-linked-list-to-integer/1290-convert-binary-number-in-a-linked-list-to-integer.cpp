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
    int getDecimalValue(ListNode* head) {
       
        ListNode *l=head;
        int k=0;
        while(l!=NULL)
        {
         k++;
            l=l->next;
        
        
        }
        
        int arr[k];
        int i=0;
        ListNode *x=head;
        while(x!=NULL)
        {
           arr[i] =x->val;
            i++;
            x=x->next;
            
        }
        int ans=0;
        int sum=0;
        for(int i=0;i<k;++i)
        {
          
            if(arr[k-1-i]==1)
            {
                ans+=pow(2,sum);
                
            }
            sum++;
        
        }
        return ans;
        
    }
};