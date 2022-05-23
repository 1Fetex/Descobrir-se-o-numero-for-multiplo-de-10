#include <stdio.h>

int main(void) {
  int numero;
  // descobrir se o numero é multiplo de 10
  printf("digite o numero\n");
  scanf("%d", &numero);
  if (numero % 10 == 0)

    printf("o %d é multiplo de 10\n", numero);
  else
    printf("o %d nao é multiplo de 10\n", numero);

  return 0;
}