/*Ingresar tres números. Calcular su promedio. Si es mayor a 10, mostrarlo. En ambos casos, calcular las diferencias entre cada número y el promedio*/

#include <stdio.h>

int main() {
  float num1, num2, num3, promedio;

  printf("Ingrese los tres números:\n ");
  scanf("%f %f %f", &num1, &num2, &num3);

  promedio = (num1 + num2 + num3) / 3;

  float diff1 = num1 - promedio;
  float diff2 = num2 - promedio;
  float diff3 = num3 - promedio;

  if(promedio > 10){
    printf("El promedio de los tres números ingresados es: %.2f\n: ", promedio);
  }
  printf("La diferencia del número %f es de %.2f\n", num1, diff1);
  printf("La diferencia del número %f es de %.2f\n", num2, diff2);
  printf("La diferencia del número %f es de %.2f\n", num3, diff3);
  
  return 0;
}