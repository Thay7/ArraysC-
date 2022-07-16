#include <iostream>
using namespace std;

int main()
{
    int VET[15];
    int positions[15];
    int n, j = 0, cont = 0;

    for (int i = 0; i < 15; i++)
    {
        cout << "Digite um número: ";
        cin >> n;

        VET[i] = n;
    }
        for (int j = 0; j < 15; j++)
        {
            if (n == VET[j])
            {
                cont++;
            }
        }

            for (int k = 0; k < 15; k++)
            {
                if (cont > 1)
                {
                    positions[k] = k;

                    cout << "O número " << n << " se repete " << cont << " vezes no vetor, nas posições " << positions[k];
                }
                else
                {
                    cout << "Não existem números repetidos no vetor!";
                }
            }
        }
    
