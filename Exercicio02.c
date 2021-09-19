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