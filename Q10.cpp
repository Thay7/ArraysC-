#include <iostream>
using namespace std;

int main(int argc, char const *agrv[])
{
    srand((unsigned)time(0));
    int maior = 100, menor = 0;
    int aleatorio;
    int numero;
    int cont = 1;
    int V[20];

    for (int i = 0; i < 20; i++)
    {
        aleatorio = rand() % (maior - menor + 1) + menor;
        V[i] = aleatorio;

        cout << V[i] << ", ";
    }

    while (cont >= 1)
    {
        cont = 0;
        cout << "\nDigite um número para verificar se ele se encontra no vetor: ";
        cin >> numero;

        for (int j = 0; j < 20; j++)
        {
            if (numero == V[j])
            {
                cont = cont + 1;
            }
        }

        if (cont >= 1)
        {
            cout << "\nO número " << numero << " se encontra no vetor!";
        }
    }
}