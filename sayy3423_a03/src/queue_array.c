/**
 * -------------------------------------
 * @file  queue_array.c
 * queue_array Source Code File
 * -------------------------------------
 * @author your name, your id, your email
 *
 * @version 2024-09-28
 *
 * -------------------------------------
 */
#include "queue_array.h"

// Functions

// your code here (include all stubs!)
void queue_initialize(queue_struct *source) {
	source->front = 0;
	source->rear = -1;
	source->count = 0;
}

bool queue_empty(const queue_struct *source) {
	return source->count == 0;

}

bool queue_full(const queue_struct *source) {
	return source->count == source->capacity;
}

int queue_count(const queue_struct *source) {
	return source->count;
}

bool queue_insert(queue_struct *source, data_type *item) {
	if (queue_full(source)) {
		return false;
	}
	source->items[source->rear] = *item;
	source->rear = (source->rear + 1) % source->capacity;
	source->count++;
	return true;

}

bool queue_peek(const queue_struct *source, data_type *item) {
	if (queue_empty(source)) {
		return false;
	}
	data_copy(item, &source->items[source->front]);
	return true;
}

bool queue_remove(queue_struct *source, data_type *item) {
	if (queue_empty(source)) {
		return false;
	}
	data_copy(item, &source->items[source->front]);
	source->front = (source->front + 1) % source->capacity;
	source->count--;
	return true;
}

void queue_print(const queue_struct *sourcee) {
	int i = sourcee->front;
	int j = 0;
	while (j < sourcee->count) {
		data_print(&sourcee->items[i]);
		printf("\n");
		i = (i + 1) % sourcee->capacity;
		j++;
	}
}

