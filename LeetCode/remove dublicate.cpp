class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* dummy = new ListNode(0); // Create a dummy node to handle edge cases
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* current = head;

        while (current != nullptr) {
            bool hasDuplicates = false;
            while (current->next != nullptr && current->val == current->next->val) {
                current = current->next;
                hasDuplicates = true;
            }

            if (hasDuplicates) {
                prev->next = current->next; // Skip all duplicates
            } else {
                prev = prev->next; // No duplicates, move prev pointer
            }

            current = current->next;
        }

        head = dummy->next;
        delete dummy; // Free the memory of the dummy node
        return head;
    }
};
