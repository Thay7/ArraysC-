//04. Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no seu respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida.

#include <iostream>
using namespace std;

int main()
{
    int idade[5];
    float altura[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite a idade da " << i + 1 << "ª pessoa: ";
        cin >> idade[i];
        cout << "Digite a altura da " << i + 1 << "ª pessoa: ";
        cin >> altura[i];
        cout << "\n";
    }

        cout << "\n";

      for (int j = 5; j >= 0; j--)
        {
            
            cout << "A altura e idade da " << j + 1 << "ª pessoa é: " << altura[j] << " e " << idade[j] << "\n";
        }
}
