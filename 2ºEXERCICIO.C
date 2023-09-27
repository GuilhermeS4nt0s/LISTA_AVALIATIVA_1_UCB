#include <stdio.h>
#include <stdlib.h>

int main() {
  int number, numbertwo;
  int somadigitos = 0;

  //printf("Digite um numero inteiro: ");
  scanf("%d", &number);

  if (number % 2 == 0) {
    printf("%d eh par\n", number);
  } else {
    printf("%d eh impar\n", number);
  }
  numbertwo = number;
  while (numbertwo > 0) {
    somadigitos += numbertwo % 10;
    numbertwo /= 10;
  }

  printf("A soma dos algarismos de %d eh %d\n", number, somadigitos);

  return 0;
}
