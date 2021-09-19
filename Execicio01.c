/*Escreva um algoritmo para ler a área de um terreno em m2, o preço do m2, calcular e imprimir o valor total do terreno.*/
#include <stdio.h>
 
int main(void)
{
    float largura, comprimento, area;
 
    printf("Largura     = "); scanf("%f", &largura);
    printf("Comprimento = "); scanf("%f", &comprimento);
 
    area = largura * comprimento;
 
    printf("Area = %f M2 \n", area);
 
    return 0;
}
