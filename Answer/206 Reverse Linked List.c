/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode* newHead = NULL;
	
	while(head){
		struct ListNode* nextNode = head->next;
		head->next = newHead;
		newHead = head;
		head = nextNode;
	}
	
	return newHead;
}
