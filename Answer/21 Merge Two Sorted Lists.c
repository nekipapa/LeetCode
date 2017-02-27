/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	//开个虚结点 
	struct ListNode *newHead = malloc(sizeof(struct ListNode)); 
    struct ListNode *newTail = newHead;
    
    while(l1 && l2) {
    	if(l1->val < l2->val) {
    		newTail->next = l1;
    		l1 = l1->next;
		}
		else {
			newTail->next = l2;
			l2 = l2->next; 
		}
		newTail = newTail->next; 
	}
	
	if(!l1)
		newTail->next = l2; 
	if(!l2)
		newTail->next = l1; 
	
	return newHead->next;
}
