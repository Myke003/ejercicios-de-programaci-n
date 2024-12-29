/* Diseñar un algortimo para determinar el ingreso de dos alumnos a una academia de inglés; se ingresan por teclado las notas de los exámenes nivelatorios y las edades de los alumnos.

La academía inscribirá a un alumno en un curso de acuerdo a lo siguiente:

a) Si aprobó el examen, va a la división "A", si no, a la división "B"

b) Si la edad va hasta 10 años inclusive, muestre curso 1. Si la edad va de 10 a 20 años inclusive, muestre curso 2. Si la edad es mayor de 20 años , muestre curso 3

c) Por otro lado, si el alumno aprobó con 9 o 10, informar que se le otorgan becas*/

#include <stdio.h>

int main() {
  int notas[2];
  int edades[2];

  for(int i = 0; i < 2; i++){
    printf("Ingrese la nota del alumno %i\n", i+1);
    scanf("%i", &notas[i]);

    printf("Ingrese la edad del alumno %i\n", i+1);
    scanf("%i", &edades[i]);
  }

  for(int i = 0; i < 2; i++){

    if(notas[i] == 9 || notas[i] == 10){
      printf("Felicidades, el alumno gano una beca!\n");
    }

    if (notas[i] > 6){
      printf("Examen aprobado. El alumno %i va a la división A\n", i+1);
      if(edades[i] < 10){
        printf("El alumno %i tiene diez años, por lo tanto va al curso 1.\n", i+1);
      } else if(edades[i] >=10 && edades[i] <=20){
        printf("El alumno %i esta entre 10 y 20 años, por lo tanto va al curso 2.\n", i+1);
      } else {
        printf("El alumno %i tiene mas de 20 años, por lo tanto va al curso 3.\n", i+1);
      }
    } else {
      printf("Examén reprobado. El alumno %i va a la división B\n",i+1);
    }
  }
  return 0;
}