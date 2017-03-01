/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *tmpCell = head;

	while(tmpCell && tmpCell->next) {
		if(tmpCell->next->val == val)
			tmpCell->next = tmpCell->next->next;
		else
			tmpCell = tmpCell->next;
	}
	if(head && head->val == val)
		head = head->next;
	
	return head;
}