/*Ingresar por teclado las tres notas obtenidas por un alumno en tres parciales de una materia.
Obtenga el promedio general, y determine cual es la diferencia entre la mayor nota y la menor*/

#include <stdio.h>

int main() {
  float nota1, nota2, nota3, promedio;
  float mayor, menor;

  printf("Ingrese la primera nota\n");
  scanf("%f", &nota1);
  printf("Ingrese la segunda nota\n");
  scanf("%f", &nota2);
  printf("Ingrese la tercera nota\n");
  scanf("%f", &nota3);

  promedio = (nota1 + nota2 + nota3)/ 3 ;

  //Determinar el mayor
  if (nota1 >= nota2 && nota1 >= nota3){
    mayor = nota1;
  } else if (nota2 >= nota1 && nota2 >= nota3){
    mayor = nota2;
  } else{
    mayor = nota3;
  }

  //Determinar el menor
  if (nota1 <= nota2 && nota1 <= nota3){
    menor = nota1;
  } else if (nota2 <= nota1 && nota2 <= nota3){
    menor = nota2;
  } else{
    menor = nota3;
  }

  float diferencia = mayor - menor;

  printf("El promedio general es: %.2f\n", promedio);
  printf("La mayor nota es: %.2f\n", mayor);
  printf("La menor nota es: %.2f\n", menor);
  printf("La diferencia entre la mayor y menor nota es: %.2f\n", diferencia);

  return 0;
}