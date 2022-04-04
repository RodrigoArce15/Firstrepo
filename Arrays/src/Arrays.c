/*
 ============================================================================
 Name        : Arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
 //An array is a data structure where we can store a bunch of different data values
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int luckyNumbers [] = {23, 2, 13, 15, 5};  //To identify an array we use "[]"
	// If we put a number inside the "[]" of the variable we are putting a limit of memory to the array

	printf("%d", luckyNumbers[3]);
	return EXIT_SUCCESS;
}
