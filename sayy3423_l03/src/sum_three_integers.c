/**
 * -------------------------------------
 * @file  functions.c
 * Lab 2 Functions Source Code File
 * -------------------------------------
 * @author name, id, email
 *
 * @version 2023-09-09
 *
 * -------------------------------------
 */
#include "functions.h"
#include <string.h>

int sum_three_integers(void) {

	// your code here

	int n1, n2, n3, sum;

	char line[STRING_SMALL];

	printf("Enter three integers separated by commas: ");

	while (fgets(line, sizeof(line), stdin)) {

		if (sscanf(line, "%d, %d, %d", &n1, &n2, &n3) == 3) {
			sum = n1 + n2 + n3;
			break;

		}

		else {

			printf("The integers were not properly entered.\n");
			printf("Enter three integers separated by commas: ");

		}
	}

	return sum;

}
