/*Dados los tres lados de un triángulo, calcular el perímetro*/
#include <stdio.h>

int main(){
  float ld1, ld2, ld3, p;
  printf("Ingrese el primer lado:\n");
  scanf("%f", &ld1);
  printf("Ingrese el primer lado:\n");
  scanf("%f", &ld2);
  printf("Ingrese el primer lado:\n");
  scanf("%f", &ld3);

  p = ld1 + ld2 + ld3;

  printf("El perimetro del triangulo es de: %.2f", p);
  return 0;
}

