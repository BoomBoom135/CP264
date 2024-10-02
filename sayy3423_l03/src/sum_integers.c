/**
 * -------------------------------------
 * @file  sum_integers.c
 * Lab 3 Source Code File
 * -------------------------------------
 * @author name, id, email
 *
 * @version 2024-01-25
 *
 * -------------------------------------
 */
#include "functions.h"
#include <string.h>

int sum_integers(void) {

	// your code here

	char line[STRING_BIG];
	int sum = 0;
	int num;

	printf("Enter integers, one per line: \n");

	while (fgets(line, sizeof(line), stdin)) {
		if (sscanf(line, "%d", &num) == 1) {
			sum += num;

		} else {
			break;
		}

	}

	return sum;

}
