#ifndef MANAGER
#define MANAGER

#include <stdio.h>
#include "../header/TodoEvent.h"

void createEvent() {
	char newName[30], newDescription[30];
	int newWorkload, newDeadline;

	printf("Please enter name: ");
	scanf("%s", newName);
	printf("\nPlease enter description: ");
	scanf("%s", newDescription);
	printf("\nPlease enter workload: ");
	scanf("%d", &newWorkload);
	printf("\nPlease enter deadline: ");
	scanf("%d", &newDeadline);

	struct TodoEvent newEvent;
	eventRevise(&newEvent, newName, newDescription, newWorkload, newDeadline);

	struct ListNode newNode = malloc(sizeof(struct ListNode));
	nodeRevise(&)
	if(/*doesn't point to null*/) {
		/* find next one */
	} else {
		/* point to oneself*/
	}
	
}

void retrieveEvent() {

}

void updateEvent() {
	
}

void deleteEvent() {
	
}

#endif
