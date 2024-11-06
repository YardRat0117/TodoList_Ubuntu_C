#include "../header/ListNode.h"

void nodeRevise(struct ListNode* node, struct ListNode* newPrev, struct ListNode* newNext, struct TodoEvent newValue) {
	node->prev = newPrev;
	node->next = newNext;
	node->value = newValue;	
}
