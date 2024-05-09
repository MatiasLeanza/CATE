#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

//realizar programa que lea el monto de una compra y calcule el 20% de descuento. mostrar el descuento y el total a pagar
	int main() {
		float montoCompra;
		float desc;
		float descC;
		printf("Ingrese el monto de compra: ");
		scanf("%f", &montoCompra);
		desc = montoCompra * 0.8;
		descC = montoCompra - desc;
		printf("El monto original es de %f$, con el 20%% de descuento el monto es de  %f$\n Lo descontado es de %f$", montoCompra, desc, descC);
	}




//sup cuadrado
 /*int main() {
	float lado;
	float sup;
	
	printf("Ingrese el lado: ");
	scanf("%f", &lado);
	sup = lado * lado;
	printf("La sup. es de %.2f", sup);
	
}*/
