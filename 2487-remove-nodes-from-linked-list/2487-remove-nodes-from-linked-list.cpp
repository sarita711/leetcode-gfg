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
    ListNode* removeNodes(ListNode* head) {
        ListNode *temp=head;
        ListNode *temp1=head;
        vector<int>v;
        while(temp1!=NULL)
        {
            v.push_back(temp1->val);
            temp1=temp1->next;
        }
        reverse(v.begin(),v.end());
        vector<int>::iterator itr;
        itr=v.begin();
        vector<int>v1;
        v1.push_back(*itr);
        int mx=*itr;
        itr++;
        
        while(itr!=v.end())
        {
            if(mx<=*itr)
            {
                v1.push_back(*itr);
                
            }
            mx=max(mx,*itr);
            itr++;
            
        }
        reverse(v1.begin(),v1.end());
        itr=v1.begin();
        while(itr!=v1.end())
        {
            temp->val=*itr;
            itr++;
            temp=temp->next;
        }
        int t=v1.size();
        temp=head;
        while(t>1)
        {
            temp=temp->next;
            t--;
            
        }
        temp->next=NULL;
        return head;
        
        
    }
};