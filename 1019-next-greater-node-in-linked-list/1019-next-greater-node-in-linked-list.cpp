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
    vector<int> nextLargerNodes(ListNode* head) {
       
       vector<int> v;
        ListNode*temp = head;
        while(temp != NULL){
        ListNode *temp2 = temp;
        bool flag = false;
        while(temp2 != NULL){
            if(temp2 ->val >temp->val){
                v.push_back(temp2->val);
                flag = true;
                break;
            }
            temp2 = temp2->next;
        }
        if(flag == false){
            v.push_back(0);
        }
            temp = temp ->next;
        }
       
        return v; 
        
    }
};