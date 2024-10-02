/**
 * -------------------------------------
 * @file  int_array_read.c
 * Lab 3 Source Code File
 * -------------------------------------
 * @author name, id, email
 *
 * @version 2024-01-25
 *
 * -------------------------------------
 */
#include "functions.h"

void int_array_read(int *array, int size) {

	// your code here
	char line[STRING_SMALL];
	int num;
	int i = 0;

	printf("Enter %d values for an array of int.\n", size);
	printf("Value for index 0: ");

	while (fgets(line, sizeof(line), stdin)) {

		if (sscanf(line, "%d", &num) == 1) {
			array[i] = num;
			i++;
			printf("Value for index %d: ", i);

			if (i == size) {
				break;
			}
		}

		else {
			printf("Not a valid integer\n");
			printf("Value for index %d: ", i);
		}

	}

}
