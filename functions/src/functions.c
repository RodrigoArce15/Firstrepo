/*
 ============================================================================
 Name        : functions.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
// A function is a collection of code that performs a specific task
// A parameter is a value we give to the function
#include <stdio.h>
#include <stdlib.h>

int main() {

	sayHi("Michael", 12);
	sayHi("Luis", 40);
	sayHi("Pablo", 15);

	return 0;
}
void sayHi(char name [], int age){
	printf("Hello %s, you are %d years old\n", name, age);
}
