[19:33, 18/06/2025] P.Kapil Chandu: /**
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
    bool isPalindrome(ListNode* head) {
    if (!head || !head->next) 
    return true;
ListNode* middle = head;
ListNode* final = head;

while (final && final->next) {
middle = middle->next;
final = final->next->next;
}

ListNode* prev = nullptr;
ListNode* present = middle;
while (present) {
ListNode* nextTemp = present->next;
present->next = prev;
prev = present;
present = nextTemp;
}

ListNode* firstHalf = head;
ListNode* secondHalf = prev;
while (secondHalf) {
if (firstHalf->val != secondHalf->val) {
return false;
}
firstHalf = firstHalf->next;
secondHalf = secondHalf->next;
}

return true;
}
};
