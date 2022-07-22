// Dados dois vetores de tamanho N, faça um algoritmo que diga se eles possuem conteúdoigual. Se existir, imprima o valor e os índices.

#include <iostream>
using namespace std;

int main()
{

    int arrayA[4];
    int arrayB[4];
    int v1, v2;
    int i = 0;
    int j = 0;

    while (i < 4)
    {
        cout << "Digite um valor para o array A: ";
        cin >> v1;
        arrayA[i] = v1;
        i++;
    }

    while (j < 4)
    {
        cout << "Digite um valor para o array B: ";
        cin >> v2;
        arrayB[j] = v2;
        j++;
    }
}