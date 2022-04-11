#include <stdio.h>

int main(){
 float raio, diam, val_circ, area;


 printf("Informe o valor do raio: ");
 scanf("%f", &raio);

 diam = raio + raio;
 val_circ = ((2 * (3.14 * (raio * raio))));
 area = (3.14 * (raio * raio));

 printf(" Informacoes:\n raio: %.1f\n diametro: %.1f\n valor da circunferencia: %.1f\n area: %.1f\n",raio,diam,val_circ,area);

 return 0;
}
