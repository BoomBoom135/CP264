/**
 * -------------------------------------
 * @file  name_set_initialize.c
 * Lab 5 Source Code File
 * -------------------------------------
 * @author Heider Ali, 999999999, heali@wlu.ca
 * @author David Brown, 123456789, dbrown@wlu.ca
 *
 * @version 2024-02-09
 *
 * -------------------------------------
 */
#include "name_set.h"

name_set* name_set_initialize() {
	// Allocate memory to the data structure
	name_set *set = malloc(sizeof *set);
	// Initialize the header fields.
	set->front = NULL;
	set->rear = NULL;
	return set;
}

int name_set_free(name_set **set) {

	// your code here
	int count = 0;
	while ((*set)->front != NULL) {
		name_set_node *temp = (*set)->front;
		(*set)->front = (*set)->front->next;
		free(temp);
		count++;
	}

	*set = NULL;
	return count;

}

BOOLEAN name_set_append(name_set *set, const char *first_name,
		const char *last_name) {

	// your code here
	if (name_set_contains(set, first_name, last_name)) {
		return FALSE;
	}

	name_set_node *new_node = (name_set_node*) malloc(sizeof(name_set_node));
	strncpy(new_node->first_name, first_name, NAME_LEN);
	strncpy(new_node->last_name, last_name, NAME_LEN);

	new_node->next = NULL;
	if (set->front == NULL) {
		set->front = new_node;
		set->rear = new_node;
	} else {
		set->rear->next = new_node;
		set->rear = new_node;
	}

	return TRUE;

}

BOOLEAN name_set_contains(const name_set *set, const char *first_name,
		const char *last_name) {

	// your code here
	name_set_node *current = set->front;
	while (current != NULL) {
		if (strcmp(current->first_name, first_name) == 0
				&& strcmp(current->last_name, last_name) == 0) {
			return TRUE;
		}
		current = current->next;
	}

	return FALSE;

}

void name_set_print(const name_set *set) {

	// your code here
	name_set_node *current = set->front;
	while (current != NULL) {
		printf("%s, %s\n", current->last_name, current->first_name);
		current = current->next;
	}

}
