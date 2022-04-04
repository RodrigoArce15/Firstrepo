/*
 ============================================================================
 Name        : basic_calculator.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1; //double : for decimal numbers
	int num2;
	printf("Enter the first number : ");
	scanf("%d", &num1); //we need to change the "%d" to "%lf" (lf is used in scanf)
	printf("Enter second number : ");
	scanf("%d", &num2);
	printf("The answer is : %d", num1 + num2);
	return EXIT_SUCCESS;
}
