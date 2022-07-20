// Utilizando vetores, crie um programa que organize uma quantidade qualquer de números inteiros fornecidos de forma aleatória da seguinte forma: primeiro os números pares em ordem crescente e depois os números ímpares em ordem decrescente.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int maior = 20, menor = 0, aleatorio;
    int aux;
    int numerosInteiros[10];
    int pares[10];
    int impares[10];
    srand((unsigned)time(0));

    for (int i = 0; i < 10; i++) // for par percorrer o array enquanto preenche com números aleatorios
    {
        aleatorio = rand() % (maior - menor + 1) + menor; // codgio para gerar numeros aleatorios
        numerosInteiros[i] = aleatorio;

        cout << numerosInteiros[i] << ", "; // array recebe numeros aleatorios
    }

    cout << endl;

    for (int j = 0; j < 10; j++) // 10 5                       //for para percorrrer o array e fazer a verificação dos números
    {
        for (int k = j + 1; k < 10; k++) // for para
        {
            if (numerosInteiros[k] < numerosInteiros[j])
            {

                aux = numerosInteiros[j];
                numerosInteiros[j] = numerosInteiros[k];
                numerosInteiros[k] = aux;
            }
        }
    }
    
    for (int l = 0; l < 10; l++)
    {
        cout << numerosInteiros[l] << ", ";
    }
    
            cout << endl;
            
    int cont = 0;
    int cont2 = 0;
    for (int m = 0; m < 10; m++)
    {
        if (numerosInteiros[m] % 2 == 0)
        {
            pares[cont] = numerosInteiros[m];
            cont++;
        }
        else
        {
            impares[cont2] = numerosInteiros[m];
            cont2++;
        }
    }

    for (int l = 0; l < cont; l++)
    {
        cout << pares[l] << ", ";
    }
    for (int l = cont - 1; l > 0; l--)
    {
        cout << impares[l] << ", ";
    }
}
