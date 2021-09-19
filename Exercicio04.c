/*Faça um algoritmo que leia as 3 notas de um aluno e calcule a média aritmética final deste aluno. */
#include <iostream>

using namespace std;

main()
{

    float n1, n2, n3, p1, p2, p3;
    float media;

    cout << "Digite a nota 1:";
    cin >> n1;

    cout << "Digite o peso da nota 1:";
    cin >> p1;

    cout << "Digite a nota 2:";
    cin >> n2;

    cout << "Digite o peso da nota 2:";
    cin >> p2;

    cout << "Digite a nota 3:";
    cin >> n3;

    cout << "Digite o peso da nota 3:";
    cin >> p3;

    media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    cout << "media:" << media;
}
