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

int main() {
	char grade;
	printf("Enter your grade : ");
	scanf("%c", &grade);
	printf("Your grade is : %c", grade);
	return 0;
}
