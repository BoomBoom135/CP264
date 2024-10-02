/**
 * -------------------------------------
 * @file  main.c
 * Assignment 1 Main Source Code File
 * -------------------------------------
 * @author name, id, email
 *
 * @version 2023-09-07
 *
 * -------------------------------------
 */
#include <stdlib.h>
#include <stdio.h>

#include "functions.h"

int main(int argc, char *argv[]) {
	setbuf(stdout, NULL);

	// Your code here

	// Problem 1
	double sFeet = 100000;
	double sAcres = feet_to_acres(sFeet);
	printf("Feet: %.2f --> Acres: %.2f\n\n", sFeet, sAcres);

	// Problem 2
	double width = 10.0;
	double length = 10.0;
	double speed = 5.0;
	int time = mow_lawn(width, length, speed);
	printf("Time: (%.2f * %.2f) / %.2f --> %.2d\n\n", width, length, speed,
			time);

	// Problem 3

	int date_number = 25091999;
	int newdate = date_convert(date_number);
	printf("Reverse: %.d --> %.d\n\n", date_number, newdate);

	// Problem 4
	int distance = 50;
	int fallingtime = falling_time(distance);
	printf("Falling time: %.d --> %.d\n\n", distance, fallingtime);

	// Problem 5
	double side1 = 3.0;
	double side2 = 4.0;
	double hyp = hypotenuse(side1, side2);
	printf("Hypotenuse: %.f and %.f --> %.f\n\n", side1, side2, hyp);

	// Problem 6
	int n = 100;
	int sum = sum_even(n);
	printf("Sum: %.d --> %.d\n\n", n, sum);

	// Problem 7
	int m = 4;
	double partial_sum = sum_partial_harmonic(m);
	printf("Partial sum: %.d --> %.6f\n\n", m, partial_sum);

	// Problem 8
	int start = 10;
	double rate = 10;
	int target = 100;
	int y = population_growth(start, rate, target);
	printf("Years: (%.d and %.f and %.d) --> %.d", start, rate, target, y);

	return 0;

}

