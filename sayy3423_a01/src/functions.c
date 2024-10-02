/**
 * -------------------------------------
 * @file  functions.c
 * Assignment 1 Functions Source Code File
 * -------------------------------------
 * @author name, id, email
 *
 * @version 2023-09-07
 *
 * -------------------------------------
 */

#include "functions.h"
#include <math.h>

// Your code here

//Problem 1
double feet_to_acres(int square_feet) {

	double footage = square_feet / FEET_PER_ACRE;

	return footage;

}

//Problem 2
int mow_lawn(double width, double length, double speed) {

	int time = (width * length) / speed;

	return time;

}

//Problem 3
int date_convert(int date_number) {

	int day = date_number / 1000000;
	int month = (date_number / 10000) % 100;
	int year = date_number % 10000;

	int date = year * 10000 + month * 100 + day;

	return date;

}

//Problem 4
int falling_time(int distance) {

	int falltime = sqrt(2 * distance / GRAVITY_ACCEL);

	return falltime;

}

//Problem 5
double hypotenuse(double side1, double side2) {

	double hnuse = sqrt(side1 * side1 + side2 * side2);

	return hnuse;

}

//Problem 6
int sum_even(int n) {

	int i = 0;
	int sum = 0;
	while (i < n + 1) {
		sum += i;
		i = i + 2;
	}

	return sum;

}

//Problem 7
double sum_partial_harmonic(int m) {

	double psum = 0;
	for (int j = 1; j <= m; j++) {
		psum += 1.0 / j;
	}
	return psum;

}

//Problem 8
int population_growth(int start, double rate, int target) {

	int y = 0;

	while (start < target) {
		start *= 1 + rate / 100.0;
		y++;
	}
	return y;
}

