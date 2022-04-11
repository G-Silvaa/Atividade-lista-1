#include <stdio.h>

int main(void){
  int x1;
  int x2;
  int soma,diferenca,produto,quoci,resto;

    printf("\nEntre com o primeiro numero: ");
    scanf("%d",&x1);

    printf("\nEntre com o segundo numero: ");
    scanf("%d",&x2);

    soma = x1 + x2;
    diferenca = x1 - x2;
    produto = x1* x2;
    quoci = x1 / x2;
    resto = x1 % x2;

    printf("a soma e: %d\n",soma);
    printf("a diferenca e: %d\n",diferenca);
    printf("o produto e: %d\n",produto);
    printf("a quoci e: %d\n",quoci);
    printf("a resto e: %d\n",resto);

    return 0;


}