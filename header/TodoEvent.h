#ifndef TODOLIST_H
#define TODOLIST_H

struct TodoEvent {
	char name[30];
	char description[30];
	int workload; // expressed in hours
	int deadline; // expressed in days
};

void displayEvent(const struct TodoEvent* const event);
void reviseEvent(struct TodoEvent* const event, char* newName, char* newDescription, int newWorkload, int newDeadline);

#endif
