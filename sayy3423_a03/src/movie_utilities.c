/**
 * -------------------------------------
 * @file  movie_utilities.c
 * Assignment 2 movie_utilities Source Code File
 * -------------------------------------
 * @author name, id, email
 *
 * @version 2024-09-28
 *
 * -------------------------------------
 */
#include "movie_utilities.h"

void get_movie(movie_struct *source) {

	// your code here
	printf("Enter movie title: ");
	fgets(source->title, sizeof(source->title), stdin);
	source->title[strcspn(source->title, "\n")] = 0;

	printf("Enter movie director: ");
	fgets(source->director, sizeof(source->director), stdin);
	source->director[strcspn(source->director, "\n")] = 0;

	printf("Enter movie year: ");
	scanf("%d", &(source->year));
	while (getchar() != '\n')
		;

	printf("Enter movie genre: ");
	scanf("%d", &(source->genre));
	while (getchar() != '\n')
		;

	printf("Enter movie rating: ");
	scanf("%f", &(source->rating));
	while (getchar() != '\n')
		;
}

void read_movie(movie_struct *source, const char *line) {

	// your code here
	sscanf(line, "%[^|]|%d|%[^|]|%f|%d", source->title, &(source->year),
			source->director, &(source->rating), &(source->genre));

}

void read_movies(movie_array_struct *movies, FILE *fp) {

	// your code here
	char line[MOVIES_INIT];
	movies->capacity = MOVIES_INIT;
	while (fgets(line, MOVIES_INIT, fp) != NULL) {
		read_movie(&movies->items[movies->count], line);
		movies->count++;
	}

}
