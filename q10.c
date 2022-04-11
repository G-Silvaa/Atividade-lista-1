#include <stdio.h>
int main(){
 int larg, comp, altu, volume;

    printf("\nCONSIDERE A MEDIDA DE COMPRIMENTO QUE VOCE DESEJA UTILIZAR!\n\n");
    printf("Informe o comprimento da caixa:\n");
    scanf("%d",&comp);

    printf("Informe a lagura da caixa:\n");
    scanf("%d", &larg);

    printf("Informe a altura de caixa:\n");
    scanf("%d", &altu);

    volume = comp * larg * altu;

    printf("O volume da caixa = %d x %d x %d que e igaual a %d\n; ",comp,larg,altu,volume);

 return 0;
}