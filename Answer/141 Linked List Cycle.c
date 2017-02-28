/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
	struct ListNode *quickPointer;
    struct ListNode *slowPointer;
    
    quickPointer = slowPointer = head;
    if(head == NULL || head->next == NULL)
    	return false;
    do{
    	quickPointer = quickPointer->next->next;
    	slowPointer = slowPointer->next;
    	if(quickPointer == slowPointer) 
    		return true;
	}while(quickPointer && quickPointer->next);
	
	return false;
}


