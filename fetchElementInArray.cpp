// Escreva um programa para preencher um vetor A de 10 elementos inteiros e um valor X. Em seguida escrever na tela "ACHEI" se o valor X existir em A e "NÃO ACHEI" caso contrário.

#include <iostream>
using namespace std;

int main(int argc, char const *agrv[])
{
    srand((unsigned)time(0));
    int maior = 100, menor = 0, aleatorio, numero;
    int A[10];
    int cont = 0;

    for (int i = 0; i < 10; i++)
    {
        aleatorio = rand() % (maior - menor + 1) + menor;
        A[i] = aleatorio;

        cout << A[i] << ", ";
    }

    cout << "Digite um número para verificar se encontra-se no vetor: ";
    cin >> numero;

    for (int j = 0; j < 10; j++)
    {
        if (numero == A[j])
        {
            cont++;
        }
    }
        if (cont >= 1)
        {
            cout << "ACHEI!";
        }
        else
        {
            cout << "NÃO ACHEI!";
        }
    }
