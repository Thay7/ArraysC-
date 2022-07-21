//Faça um algoritmo para ler um vetor de 20 números. Após isto, ler mais um número qualquer, calcular e escrever quantas vezes esse número aparece no vetor.

#include <iostream>
using namespace std;

int main()
{
    int V[20];
    int valor, numero;
    int cont = 0;

    for (int i = 0; i < 20; i++)
    {
        cout << "Digite um valor: ";
        cin >> valor;

        V[i] = valor;
    }

    cout << "Digite um número para verificar se ele se encontra no vetor: ";
    cin >> numero;

    for (int j = 0; j < 20; j++)
    {
        if (numero == V[j])
        {
            cont++;
        }
    }
    if (cont == 1)

        cout << "O número " << numero << " aparece " << cont << " vez no vetor!";

    else if (cont > 1)
    {
        cout << "O número " << numero << " aparece " << cont << " vezes no vetor!";
    }
}