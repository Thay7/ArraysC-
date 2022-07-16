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

      for (int j = 4; j >= 0; j--)
        {
            cout << "A altura e idade da " << j + 1 << "ª pessoa é: " << altura[j] << " e " << idade[j] << "\n";
        }
}
