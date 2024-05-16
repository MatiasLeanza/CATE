/*
	int edad;
	char *respuesta;
	printf("ingrese la edad: ");
	scanf("%d", &edad);
	
	if(edad >= 18) {
		respuesta = "Mayor Edad";
	} else  {
		respuesta = "Menor de Edad";
	} 
	printf("%s", respuesta);
*/
//programa para identificar si es un numero negativo positivo o 0

#include <stdio.h>
#include <stdlib.h>
int main() {
	int numero;
	char *respuesta;
	printf("ingrese el numero: ");
	scanf("%d", &numero);
	
	if(numero > 0) {
		respuesta = "Positivo";
	} else if (numero < 0) {
		respuesta = "Negativo";
	} else if (numero == 0) {
		printf("El numero es 0");
	} else {
		printf("el valor no es un valor valido");
	}
	printf("%s", respuesta);
}
