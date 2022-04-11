#include <stdio.h>

int main(){

float cel,fah;

printf("Digite a temperatura em Cº: ");
scanf("%d",&cel);

fah = (9 * cel + 160) / 5; 

printf("A temperatura em Fahrenheit é %f: ",fah);

return 0;
}