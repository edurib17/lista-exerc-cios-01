/*Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e calcule a seguinte expressão:D = (R+S) / 2 onde  R = (A+B) x 2   e     S = (B+C) x 2*/
#include <stdio.h>
int main()
{
    int A, B, C;
    int R;
    int S;
    int D;
    printf("Entre com A B C:");
    scanf("%d %d %d", &A, &B, &C);
    R = (A + B) * 2;
    S = (B + C) * 2;
    D = (R + S) / 2;
    printf("R = %d\n", R);
    printf("S = %d\n", S);
    printf("D = %d\n", D);
}
