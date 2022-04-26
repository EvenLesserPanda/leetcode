// Space Complexity: O(1)
// Time Complexity: O(n)

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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev, *curr;
        curr = head;
        prev = nullptr;
        while(curr)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
};

// // Space Complexity: O(n)
// // Time Complexity: O(n)

// class Solution {
// public:
//     ListNode* helper(ListNode* head, ListNode* prev) {
//         if (!head) 
//             return prev;
//         ListNode* next = head->next;
//         head->next = prev;
//         return helper(next, head); 
//     }
    
//     ListNode* reverseList(ListNode* head) {
//         return helper(head, nullptr);
//     }
// };
