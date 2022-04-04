/*
 ============================================================================
 Name        : user_imput.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int age;
	printf("Enter your age : ");
	scanf("%d", &age);
	printf("You are %d years old", age);
	return EXIT_SUCCESS;
}
