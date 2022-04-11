#include <stdio.h>
#include <stdlib.h>

int main(){
 int valor;

 puts("Informe um valor inteiro: ");
 scanf("%d", &valor);

 printf("O valor absoluto de %d e igual %d\n.",valor, abs(valor));

 return 0;
}