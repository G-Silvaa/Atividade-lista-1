#include <stdio.h>

int main(){

int hora_aula, aulas_mes, desconto_inss;

int salario_bruto, salario_liquido;

printf("Digite o valor da hora aula: ");
scanf("%d", &hora_aula);

printf("Digite a quantidade de aulas dadas no mes: ");
scanf("%d", &aulas_mes);

printf("Digite o percentual de desconto do INSS: ");
scanf("%d", &desconto_inss);

salario_bruto = aulas_mes * hora_aula;
salario_liquido = salario_bruto - desconto_inss;

printf("\nSalario bruto: %d\n", salario_bruto);
printf("Salário liquido: %d\n", salario_liquido);

return 0;

}