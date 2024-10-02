/**
 * -------------------------------------
 * @file  movie.c
 * Assignment 2 movie Source Code File
 * -------------------------------------
 * @author name, id, email
 *
 * @version 2024-09-13
 *
 * -------------------------------------
 */
#include "movie.h"

// Array of strings for movie genres.
const char *const GENRES[] = { "science fiction", "fantasy", "drama", "romance",
		"comedy", "zombie", "action", "historical", "horror", "war", "mystery" };

// Calculates size of GENRES array.
const int GENRES_COUNT = sizeof GENRES / sizeof *GENRES;

void movie_init(movie_struct *source, const char *title, int year,
		const char *director, int genre, float rating) {
	assert(year >= FIRST_YEAR);
	assert(rating >= MIN_RATING && rating <= MAX_RATING);

	// your code here

}

void movie_copy(const movie_struct *source, movie_struct *target) {

	// your code here
	strcpy(target->title, source->title);
	strcpy(target->director, source->director);
	target->year = source->year;
	target->genre = source->genre;
	target->rating = source->rating;

}

int movie_compare(const movie_struct *source, const movie_struct *target) {

	// your code here
	return strcmp(source->title, target->title);

}

void movie_print(const movie_struct *source) {

	// your code here
	printf("Title: %s\n", source->title);
	printf("Director: %s\n", source->director);
	printf("Year: %d\n", source->year);
	printf("Genre: %s\n", GENRES[source->genre]);
	printf("Rating: %.1f\n", source->rating);

}

char* movie_key(char *str, size_t max_length, movie_struct *source) {

	// your code here
	snprintf(str, max_length, "%s_%d", source->title, source->year);
	return str;

}

void genres_menu() {

	// your code here
	for (int i = 0; i < GENRES_COUNT; i++) {
		printf("%d. %s\n", i, GENRES[i]);
	}

}
