class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ptr = head, *temp = head;
        for (int i = 0; i < n; i++) ptr = ptr->next;
        
        if (!ptr) return head->next;
        
        while (ptr->next) {
            ptr = ptr->next;
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};