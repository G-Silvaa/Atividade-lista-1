#include <stdio.h>
int main(){
 float real, dolar, conversao;

 printf("Informe o valor de cotacao do dolar:\n");
 scanf("%f", &dolar);

 printf("Informe que valor em real dejesa converter:\n");
 scanf("%f", &real);

 conversao = real/dolar;

 printf("O valor em real R$ %.2f covertido em dolar fica US$ %.2f\n.",real,conversao);
 return 0;
}