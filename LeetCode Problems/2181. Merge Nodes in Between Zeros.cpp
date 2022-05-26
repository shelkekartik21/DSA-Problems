class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        
        int sum = 0;
        head = head->next;
        
        while(head != NULL){
            if(head->val == 0){
                temp->next = new ListNode(sum);
                temp = temp->next;
                sum = 0;
            }else{
                sum += head->val;
            }
            head = head->next;
        }
        
        return dummy->next;
    }
};