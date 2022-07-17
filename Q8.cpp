// Faça um algoritmo para ler 15 números e armazenar em um vetor VET, verificar e escrever se existem números repetidos no vetor VET e em que posições se encontram

#include <iostream>
using namespace std;

int main()
{
    int VET[15];
    int positions[15];
    int alreadyFound[15];
    int number, j = 0, cont = 0, cont2 = 0;

    for (int i = 0; i < 15; i++)
    {
        cout << "Digite um número para preencher o vetor: ";
        cin >> number;

        VET[i] = number;
    }
    for (int j = 0; j < 15; j++)
    {
        cont = 0;
        cont2 = 0;

        for (int n = 0; n < 15; n++)
        {
            if (VET[j] == alreadyFound[n])
                cont2++;
        }

        if (cont2 == 0)
        {

            for (int k = 0; k < 15; k++)
            {
                if (VET[k] == VET[j])
                {
                    positions[cont] = k;
                    cont++;
                }
            }

            if (cont > 1)
            {
                alreadyFound[j] = VET[j];

                cout << "O número " << VET[j] << " se repete " << cont << " vezes no vetor, nas posições ";

                for (int l = 0; l < cont; l++)
                {
                    cout << positions[l] << ", ";
                }

                cout << "\n";
            }
        }
    }
}
