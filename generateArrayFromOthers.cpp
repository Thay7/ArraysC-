//Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outrosvetores.

#include <iostream>
#include <ctime>
using namespace std;

int main (int argc, char const* agrv[])
{
    
    int maior = 10, menor = 1;
    int aleatorio;
    int A[10];
    int B[10];
    int C[20];

    for(int i = 0; i < 10; i++)
    {
        aleatorio = rand()%(maior-menor+1) + menor;
        A[i] = aleatorio;
    }
    for(int j = 0; j < 10; j++)
    {
        aleatorio = rand()%(maior-menor+1) + menor;
        B[j] = aleatorio;
    }
    
    int i = 0;
    int j = 0;

    for(int k = 0; k < 20; k++)
    {
        if(k % 2 ==0) {

            C[k] = A[i];
            i = i + 1;

        } else {

            C[k] = B[j];
            j = j + 1;
        }

        cout << C[k] << "\n";
    }

    
}