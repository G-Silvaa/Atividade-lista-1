#include <stdio.h>

int main(){
 int num;

 printf("Digite um numero inteiro:");
 scanf("%d",&num);

 printf("O numero %d e um numero %s\n", num,(num %2 ?"impar." : "par."));

 return 0;
}
