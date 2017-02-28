/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
struct ListNode* deleteDuplicates(struct ListNode* head) {
	/*struct ListNode *current = head;
	while(current && current->next) {
		if(current->val == current->next->val)
			current->next = current->next->next;
		else
			current = current->next;
	}
	
	return head;*/
	if(!head || !head->next)
	   return head;
	
	struct ListNode *tmpCell = head->next;
	struct ListNode *newHead = head;
	while(head) {
		while(tmpCell && tmpCell->val == head->val) 
			tmpCell = tmpCell->next;
		head->next = tmpCell;
		head = tmpCell;
	}
	return newHead;
		
}