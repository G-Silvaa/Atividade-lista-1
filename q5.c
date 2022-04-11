#include <stdio.h>

int main(){
 float conta;
 float comissao;

 printf("Valor gasto: ");
 scanf_s("%f", &conta);

 comissao = conta / 10;

 printf("A comissao do garcom e de: %.2f", comissao);
 printf("O total a ser pago e de: %.2f", conta + comissao);

 return 0;
}