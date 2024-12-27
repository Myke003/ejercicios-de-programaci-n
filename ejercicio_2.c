/* Calcular el area de un triangulo, conociendo la base, y sabiendo que su altura es igual al cuadrado de la base */

#include <stdio.h>

int main() {
  float base, altura, area;

  printf("Ingrese la base del triangulo: \n");
  scanf("%f", &base);

  if(base < 0){
    printf("La base no puede ser negativa.\n");
    return 1;
  }

  altura = base * base;
  area = (base*altura)*0.5;

  printf("El area del triangulo es de %.2f\n", area);
  
  return 0;
}