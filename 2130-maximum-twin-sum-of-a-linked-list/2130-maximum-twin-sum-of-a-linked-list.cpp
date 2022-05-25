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
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* cur = slow;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        
        
        while(cur){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        
        cur = head;
        
        //print
        while(cur){
            cout<<cur->val<< " ";
            cur = cur->next;
        }
        
        int m = 0;
        while(prev){
            m = max(m,  head->val + prev->val);
            prev = prev->next;
            head = head->next;
        }
        return m;
    }
};