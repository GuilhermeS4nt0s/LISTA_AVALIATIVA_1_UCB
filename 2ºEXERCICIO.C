#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero, numeroCopia;
  int somadigitos = 0;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);

  if (numero % 2 == 0) {
    printf("O numero eh par\n");
  } else {
    printf("O numero eh impar\n");
  }
  numeroCopia = numero;
  while (numeroCopia > 0) {
    somadigitos += numeroCopia % 10;
    numeroCopia /= 10;
  }

  printf("A soma dos digitos do numero %d eh %d.\n", numero, somadigitos);

  return 0;
}
