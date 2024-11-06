#ifndef LISTNODE_H
#define LISTNODE_H

#include "TodoEvent.h"

struct ListNode {
	struct ListNode* prev;
	struct ListNode* next;
	struct TodoEvent value;
};

void nodeRevise(struct ListNode* node, struct ListNode* newPrev, struct ListNode* newNext, struct TodoEvent newValue);

#endif
