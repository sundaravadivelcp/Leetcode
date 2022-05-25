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
        ListNode* curNode = head;
        ListNode* curNode2 = head;
        
        
        
        if(curNode == NULL)
            return 0;
        
        vector<int> v;
        
        int count = 0;
        
        while(curNode != NULL){
            v.push_back(curNode->val);
            curNode = curNode->next;
            // if(curNode != NULL)
            //     curNode2 = curNode2->next->next;
            count++;
        }
        
        int max = 0;
        
        for(int i=0;i<v.size()/2;i++){
            int sum = 0;
            sum = v[i] + v[v.size()-i-1];
            if(max < sum)
               max = sum;
        }
        
        return max;
        
    }
};