
//   struct ListNode {
//     int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//       ListNode(int x, ListNode *next) : val(x), next(next) {}
//   };
 
class Solution {
public: ListNode* reverseList(ListNode* head) { if (head == nullptr) { return nullptr; // If the head is null, return null immediately. 
} ListNode* prev = nullptr; ListNode* mid = head; ListNode* after = nullptr; while (mid != nullptr) { after = mid->next; mid->next = prev; prev = mid; mid = after; } return prev; }
};