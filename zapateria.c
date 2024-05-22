/*Una zapateria pone en promoción sus productos, 
otorgando un descuento del 10% a las compras
 mayores de $100.000, un 25% a las mayores de $200.000 y un 30% a las mayores a $300.000, 
más un descuento extra del 5% si el cliente
 está registrado. Informar el descuento, el total a pagar y el valor por cuota si decidiera pagar en cuotas.*/
 #include <stdio.h>
 #include <stdlib.h>


 int main() {
    float monto;
    int decisionCliente;
    int cuotas;
  printf("Ingrese el monto de la compra: ");
    scanf("%f", &monto);
        
        if (monto >= 100000) {
            monto = monto * 0.9;
        } else if (monto >= 200000) {
            monto = monto * 0.75;
        } else if (monto >= 300000) {
            monto = monto * 0.7;
        }
   printf("el monto es de: %f\n", monto);
   printf("Es usted cliente?\n 1)Si\n 2)No: ");
    scanf("%d", &decisionCliente);

    if (decisionCliente == 1) {
        monto = monto * 0.95;
    } else if (decisionCliente == 2) {
        monto = monto;
    } else {
        printf("Elija una opcion correcta");
        return 0;
    }
      printf("el monto es de: %f\n", monto);
    printf("En cuantas cuotas lo desea pagar ? (ponga un numero mayor a 0): ");
    scanf("%d", &cuotas);
    if (cuotas > 0) {
        monto = monto / cuotas;
        printf("el valor de cada cuota es de %f", monto);
    } else {
        printf("Ponga un valor valido");
        return 0;
    }
    

 }
