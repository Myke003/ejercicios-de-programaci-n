  /* Sabiendo la cantidad de bancos de un aula, y la cantidad de alumnos inscriptos para ese curso, determinar si alcanzan los bancos existentes. De no ser asi, informar cuantos bancos seria necesario agregar*/

#include <stdio.h>

int main() {

  int bancos, alumnos, bancos_faltantes;

  printf("Ingrese la cantidad de bancos del aula\n ");
  scanf("%i", &bancos);

  printf("Ingrese la cantidad de alumnos\n ");
  scanf("%i", &alumnos);

  if(bancos >= alumnos){
    printf("Los bancos son suficientes.\n");
  }else{
    bancos_faltantes = alumnos - bancos;
    printf("Se necesitan %i extras.\n", bancos_faltantes);
  }
  return 0;
}