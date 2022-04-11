#include <stdio.h>

int main()

{

    int x;

    printf("\nANTECESSOR E SUCESSOR\n");

    printf("\nDigite um numero inteiro: ");

    scanf("%d", &x);

    printf("\nAntecessor de %d = %d", x, (x-1));

    printf("\nSucessor   de %d = %d\n\n", x, (x+1));

    return(0);


}