#include <stdio.h>
#include <stdlib.h>

int main() {
  int number, numbertwo;
  int somadigitos = 0;

  printf("Digite um numero inteiro: ");
  scanf("%d", &number);

  if (number % 2 == 0) {
    printf("O numero eh par\n");
  } else {
    printf("O numero eh impar\n");
  }
  numbertwo = number;
  while (numbertwo > 0) {
    somadigitos += numbertwo % 10;
    numbertwo /= 10;
  }

  printf("A soma dos digitos do numero %d eh %d.\n", number, somadigitos);

  return 0;
}
