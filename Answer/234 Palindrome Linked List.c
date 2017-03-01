/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//反转链表后半部分，在比较整个链表的前后两部分是否相等
struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode *newHead = NULL;
	struct ListNode *nextNode = NULL;
	
	while(head) {
		nextNode = head->next;
		head->next = newHead;
		newHead = head;
		head = nextNode;
	}
	
	return newHead;
}

bool isPalindrome(struct ListNode* head) {
    if(!head || !head->next)
		return true;
	
	struct ListNode *fast;		//快慢指针寻找链表中间结点
	struct ListNode *slow;
	
	fast = slow = head;
	while(fast && fast->next) {
		fast = fast->next->next;
		slow = slow->next;
	}
	
	if(fast) {			
		slow->next = reverseList(slow->next);	//结点个数为奇数
		slow = slow->next;
	}
	else 		
		slow = reverseList(slow);				//结点个数为偶数
	while(slow) {
		if(head->val != slow -> val)
			return false;
		head = head->next;
		slow = slow->next;
	}
	
	return true;
}


