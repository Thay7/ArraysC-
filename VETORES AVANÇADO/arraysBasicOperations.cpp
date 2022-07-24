// Faça um programa que preencha aleatório dois vetores de números inteiros com 20 números cada. Depois de montados gere um terceiro vetor formado pela diferença dos dois vetores lidos, um quarto vetor formado pela soma dos dois vetores lidos e por último um quinto vetor formado pela multiplicação dos dois vetores lidos

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    srand((unsigned)time(0));
    int maior = 100;
    int menor = 0;
    int aleatorio;
    int arrayA[20];
    int arrayB[20];
    float diferencaDosVetores[20];
    float somaDosVetores[20];
    float multiplicacaoDosVetores[20];

    for (int i = 0; i < 20; i++)
    {
        aleatorio = rand() % (maior - menor + 1) + menor;
        arrayA[i] = aleatorio;
    }
    for (int j = 0; j < 20; j++)
    {
        aleatorio = rand() % (maior - menor + 1) + menor;
        arrayB[j] = aleatorio;
    }

    for (int k = 0; k < 20; k++)
    {
        diferencaDosVetores[k] = arrayA[k] - arrayB[k];
    }

    for (int k = 0; k < 20; k++)
    {
        somaDosVetores[k] = arrayA[k] + arrayB[k];
    }

    for (int k = 0; k < 20; k++)
    {
        multiplicacaoDosVetores[k] = arrayA[k] * arrayB[k];
    }
}
