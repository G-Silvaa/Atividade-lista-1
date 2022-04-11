#include <stdio.h>

int main(){
    float Altura, AlturaxPeso=0.0;
    char Sexo;

    printf("\nDigite a sua altura (Ex: 1.75):\n");
    scanf("%f",&Altura);

    printf("\nDigite o seu sexo (M para Masculino e F para Feminino):\n");
    scanf("%f",&Sexo);

    if(Sexo == 'M'){
        AlturaxPeso+=((72.7*Altura)-58);
        printf("\nO seu peso ideal e: %.3f\n",AlturaxPeso);
    }
    else
    {
        AlturaxPeso=((62.1*Altura)-44.7);
        printf("\nO seu peso ideal é: %.2f\n",AlturaxPeso);
    }
    return 0;