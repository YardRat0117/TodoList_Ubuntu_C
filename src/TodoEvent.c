#include <stdio.h>
#include <string.h>
#include "../header/TodoEvent.h"

void displayEvent(const struct TodoEvent* const event) {
	printf("Name: %s\n", event->name);
	printf("Description: %s\n", event->description);
	printf("Workload(counted in hours): %d\n", event->workload);
	printf("Deadline(counted in days): %d\n", event->deadline);
}

void reviseEvent(struct TodoEvent* const event, char* newName, char* newDescription, int newWorkload, int newDeadline) {
	strcpy(event->name, newName);
	strcpy(event->description, newDescription);
	event->workload = newWorkload;
	event->deadline = newDeadline;
}
