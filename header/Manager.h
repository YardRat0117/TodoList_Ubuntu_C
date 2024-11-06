#ifndef MANAGER_H
#define MANAGER_H

#include "ListNode.h"

struct Manager{
	struct ListNode* head;
};

void createEvent();
void retrieveEvent();
void updateEvent();
void deleteEvent();

#endif
