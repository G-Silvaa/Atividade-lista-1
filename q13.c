#include <stdio.h>

int main(){
    int a;
    int b;
    int troca;

    printf("\nEntre com o valor de a");
    scanf("%d",&a);

    printf("\nEntre com o valor de b");
    scanf("%d",&b);

   troca = a;
   a = b;
   b = troca;

    printf("A%d\n",a);
    printf("b%d\n",b);


}