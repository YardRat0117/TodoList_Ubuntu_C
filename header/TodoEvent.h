#ifndef TODOLIST_H
#define TODOLIST_H
#include <stdio.h>
#include <string.h>

struct TodoEvent {
	char name[30];
	char description[30];
	int workload; // expressed in hours
	int deadline; // expressed in days
};

void eventDisplay(const struct TodoEvent* const event);
void eventRevise(struct TodoEvent* const event, char* newName, char* newDescription, int newWorkload, int newDeadline);

#endif
