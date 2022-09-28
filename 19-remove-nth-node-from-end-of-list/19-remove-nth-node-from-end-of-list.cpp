class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      
        if(head==NULL )
        {
return head;
            
        }
      
        ListNode* temp=head;
        int k=0;
        while(temp!=NULL )
        {
k++;

temp=temp->next;
}
       
      int a=k-n;
        int i=0 ;
        ListNode* temp1=head;
            if(k==1 && a==0)
        {
               head=NULL;
return head;

}
     
        while(temp1!=NULL && i<=a&&temp1->next!=NULL)
        {
            if(a==0)
            {
                
 ListNode * temp2=temp1;
                temp1=temp1->next;
                delete(temp2);
head=temp1;
            }
 else if(i==a-1)
{


    
    ListNode * temp2=temp1->next;
    temp1->next=temp1->next->next;
    

   
        delete (temp2);

return head;
}
            i++;
            temp1=temp1->next;

    }
        
        return head;
        
        
    }
};