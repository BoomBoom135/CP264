/**
 * -------------------------------------
 * @file  pq_array.c
 * pq_array Source Code File
 * -------------------------------------
 * @author your name, your id, your email
 *
 * @version 2024-09-28
 *
 * -------------------------------------
 */
#include "pq_array.h"

// Functions

// your code here (include all stubs!)
void pq_initialize(pq_struct *source) {
	source->count = 0;
	source->first = 0;
}

bool pq_empty(const pq_struct *source) {
	return source->count == 0;
}

bool pq_full(const pq_struct *source) {
	return source->count == source->capacity;
}

int pq_count(const pq_struct *source) {
	return source->count;
}

bool pq_insert(pq_struct *source, data_type *item) {
	if (pq_full(source)) {
		return false;
	}
	int i = source->first;
	while (i < source->count && data_compare(item, &source->items[i]) > 0) {
		i++;
	}
	for (int j = source->count; j > i; j--) {
		data_copy(&source->items[j], &source->items[j - 1]);
	}
	data_copy(&source->items[i], item);
	source->count++;
	return true;
}

bool pq_peek(const pq_struct *source, data_type *item) {
	if (pq_empty(source)) {
		return false;
	}
	data_copy(item, &source->items[source->first]);
	return true;
}

bool pq_remove(pq_struct *source, data_type *item) {
	if (pq_empty(source)) {
		return false;
	}
	data_copy(item, &source->items[source->first]);
	for (int i = source->first; i < source->count; i++) {
		data_copy(&source->items[i], &source->items[i + 1]);
	}
	source->count--;
	return true;
}

void pq_print(const pq_struct *source) {
	for (int i = 0; i < source->count; i++) {
		data_print(&source->items[i]);
	}
}
