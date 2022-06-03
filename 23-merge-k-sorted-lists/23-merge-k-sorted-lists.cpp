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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int,int> m;
        
        int n = lists.size();
        
        for(int i=0;i<n;i++){
            ListNode* temp = lists[i];
            while(temp){
                m[temp->val]++;
                temp = temp->next;
            }
        }
        
        ListNode* head = new ListNode(); 
        ListNode* prev = head;
        
        for(auto it=m.begin(); it!=m.end(); ++it){
            n = it->second;
            while(n){
                ListNode* temp = new ListNode(it->first);
                prev->next = temp;
                prev = temp;
                n--;
            }
        }
        
        return head->next;
    }
};