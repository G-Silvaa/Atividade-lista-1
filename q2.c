#include <stdio.h>

int main() {
 int num;

 printf("Informe um valor inteiro:");
 scanf("%d",&num);

 printf("\nHexadecimal: %X\n",num);
 printf("Octal: %o\n",num);

 return 0;
}