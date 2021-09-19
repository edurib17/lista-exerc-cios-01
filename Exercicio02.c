/*
Escreva um algoritmo para calcular e imprimir o valor do salário bruto de um vendedor de imóveis. O vendedor recebe um valor fixo mensal além de uma comissão de 6% sobre o total das vendas do mês. O algoritmo deve ler o valor do salário fixo e do total das vendas.
*/
#include <stdio.h>
 
int main(void)
{
    float salario,vendas, total, valorPorcentagem;
 
    printf("Entre com salario fixo:"); scanf("%f", &salario);
    printf("Entre com quantidade de vendas:"); scanf("%f", &vendas);
 
    valorPorcentagem =  (6 * vendas)/100;
    total = salario  + valorPorcentagem;
 
    printf("Salario Bruto = %f \n", total);
 
    return 0;
}
