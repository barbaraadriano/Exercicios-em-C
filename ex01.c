#include <stdio.h>

int main(void) {

  float reaj=0, saldo=0;

  printf("Digite o saldo:");
  scanf("%f", &saldo);
  
  while (saldo > 0) {
    reaj = (saldo*1)/100;
    printf("O saldo com o reajuste ficou no valor de %.2f\n", saldo +          reaj); 
    printf("Digite o saldo:");
    scanf("%f", &saldo);
  }
  
  printf("Programa encerrado. \n");
  
  return 0;
}
