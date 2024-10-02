/**
 * -------------------------------------
 * @file  strings_with_substring.c
 * Lab 4 Source Code File
 * -------------------------------------
 * @author name, id, email
 *
 * @version 2024-02-03
 *
 * -------------------------------------
 */
#include "functions.h"
#include <string.h>
#include <stdio.h>

void strings_with_substring(strings_array *data, char *substr) {

	//Your Code Here

	for (int i = 0; i < data->lines; i++) {
		if (strstr(data->strings[i], substr) != NULL) {
			printf("%s\n", data->strings[i]);
		}
	}

}
