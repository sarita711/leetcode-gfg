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
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        vector<int>v1;
        vector<int>v2;
        while(temp1!=NULL)
        {
            v1.push_back(temp1->val);
            temp1=temp1->next;
        }
         while(temp2!=NULL)
        {
            v2.push_back(temp2->val);
            temp2=temp2->next;
        }
        reverse(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());
        vector<int>::iterator itr1;
        vector<int>::iterator itr2;
        itr1=v1.begin();
        itr2=v2.begin();
        int prev=0;
        vector<int>v;
        while(itr1!=v1.end() && itr2!=v2.end())
        {
            int temp=*itr1+*itr2+prev;
            v.push_back(temp%10);
          
            prev=temp/10;
            itr1++;
            itr2++;
        }
        while(itr1!=v1.end())
        {
            int temp=*itr1+prev;
            v.push_back(temp%10);
            prev=temp/10;
            itr1++;
           
        
        }
        while(itr2!=v2.end())
        {
           int temp=*itr2+prev;
            v.push_back(temp%10);
            prev=temp/10;
           
            itr2++;
        
        }
        if(prev!=0)
        {
            v.push_back(prev);
        }
        temp1=l1;
        reverse(v.begin(),v.end());
        itr1=v.begin();
        while(temp1->next!=NULL && itr1!=v.end())
        {
            temp1->val=*itr1;
            itr1++;
            temp1=temp1->next;
        }
    if(itr1!=v.end()&&temp1!=NULL ){
        temp1->val=*itr1;
        itr1++;
        }
        
        
        while(itr1!=v.end() )
        {
            ListNode *x1=new ListNode(*itr1);
            temp1->next=x1;
            
            
            temp1=temp1->next;
            itr1++;
        }
        return l1;
    }
};