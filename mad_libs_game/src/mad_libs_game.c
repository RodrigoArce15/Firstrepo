/*
 ============================================================================
 Name        : mad_libs_game.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char color [20];
	char pluralNoun [20];
	char celebrityF [20];
	char celebrityL [20];
	printf("Choose a color : ");
	scanf("%s", color);
	printf("Choose a Plural noun : ");
		scanf("%s", pluralNoun);
		printf("Choose a celebrity : ");
			scanf("%s%s", celebrityF, celebrityL);

			printf("\nRoses are %s \n", color);
			printf("%s are blue \n", pluralNoun);
			printf("I love %s %s", celebrityF, celebrityL);
/* If we need want to put a celebrity with 1 word we won't we able to do it, because
 * C is really specific reading the code, we need to specify it beforehand. */

	return EXIT_SUCCESS;
}
