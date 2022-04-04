/*
 ============================================================================
 Name        : return_statement.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
  // a return will be able to return information back to who ever called it
/*Podemos colocar la segunda función por encima de la principal para que funcione correctamente.
 * Pero tambien se puede llamar a la función antes de la principal obteniendo el mismo reultado.
 */
#include <stdio.h>
#include <stdlib.h>

double cube(double num); //2da función

int main(void) { //1ra función

	printf("Answer : %f", cube(5.00));

	return EXIT_SUCCESS;
}
double cube(double num){
	return num * num * num;
}
