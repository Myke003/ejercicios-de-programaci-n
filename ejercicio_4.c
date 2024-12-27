/* Diseñar un programa que, al ingresar por teclado el precio por kilo y la cantidad en kilos adquirida por un cliente de tres productos (6 variables), muestre:

a) El monto total en pesos correspondiente a la compra de cada producto
b) El total en pesos de la compra realizada por el cliente
c) Si el total es superior a $100, hacer un descuent del 10%. Mostrar el nuevo monto*/

#include <stdio.h>

int main() {
  //Inicializar variables
  float precios[3];
  int cantidades[3];

  float monto_productos[3];
  float monto_total = 0.0;

  //El bucle for ayuda a captar los datos y los almacena en el array.
  for (int i= 0; i <3; i++){
    printf("Ingrese la cantidad del producto %d: ", i+1);
    scanf("%d", &cantidades[i]);

    printf("Ingrese el precio de producto %d: ", i+1);
    scanf("%f", &precios[i]);
  }

  //Calculamos el monto por producto y el monto total
  for (int i=0; i<3; i++){
    monto_productos[i] = precios[i] * cantidades[i];
    monto_total += monto_productos[i];
  }

  for (int i= 0; i<3; i++){
    printf("El monto total del producto %d es igual a: %.2f\n", i+1, monto_productos[i]);

  }
  printf("Monto total de la compra: %.2f\n", monto_total);

  if (monto_total > 100){
    float descuento = monto_total * 0.10;
    monto_total = monto_total - descuento;
    printf("Descuento del 10% aplicado: %.2f\n", descuento);
  }
  
  printf("El valor total a pagar es de: %.2f", monto_total);
  
  return 0;
}