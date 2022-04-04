/*
 ============================================================================
 Name        : user_imput_two.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Usamos los corchetes en el char para identificar la cantidad de caracteres
  que vamos a usar. Luego utilizamos fgets por si queremos utilizar un apellido
  (Al usar char name[20] luego del string el espacio en blanco entre el nombre y el
  apellido va a cortar la secuencia)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[20];
	printf("Enter your name : \n");
	fgets(name, 20, stdin); // Luego utilizamos fgets para
	printf("Your name is : %s", name);
	return EXIT_SUCCESS;
}
