// Dados dois vetores de tamanho N, faça um algoritmo que diga se eles possuem conteúdo igual. Se existir, imprima o valor e os índices.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    srand((unsigned)time(0));
    int maior = 100;
    int menor = 0;
    int aleatorio;
    int arrayA[10];
    int arrayB[10];

    for (int i = 0; i < 10; i++)
    {
        aleatorio = rand() % (maior - menor + 1) + menor;
        arrayA[i] = aleatorio;
    }
    for (int j = 0; j < 10; j++)
    {
        aleatorio = rand() % (maior - menor + 1) + menor;
        arrayB[j] = aleatorio;
    }
    for (int k = 0; k < 10; k++)
    {
        for (int l = 0; l < 10; l++)
        {
            if (arrayA[k] == arrayB[l])
            {
                cout << "O valor " << arrayA[k] << " se repete no indice " << k << " e " << l << endl;
            }
        }
    }
}
