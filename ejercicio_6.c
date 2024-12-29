  /*Ingresar dos números distintos A y B, compararlos e imprimir de mayor a menor*/

  #include <stdio.h>

  int main() {
    int num1, num2;

    printf("Ingresa el primer número. \n");
    scanf("%d", &num1);
    printf("Ingresa el segundo número.\n");
    scanf("%d", &num2);

    if (num1 == num2){
      printf("Los números no pueden ser iguales.");
      return 1;
    }

    if (num1 > num2){
      printf("%i %i", num1, num2);
    }else {
      printf("%i %i", num2, num1);
    }

    return 0;
  }