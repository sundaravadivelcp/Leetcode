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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode *prev = &dummy, *curr = head;
        int len = 0;
        
        while (curr) { // First pass to find the length of the list
            len++;
            curr = curr->next;
        }
        
        while (len >= k) { // Only reverse if we have at least k nodes left
            curr = prev->next;
            ListNode *next = curr->next;
            for (int i = 1; i < k; ++i) { // Reverse k nodes
                curr->next = next->next;
                next->next = prev->next;
                prev->next = next;
                next = curr->next;
            }
            prev = curr;
            len -= k;
        }
        
        return dummy.next;
    }
};

