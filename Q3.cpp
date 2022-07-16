#include <iostream>
using namespace std;

int main()
{

    float notas[4];
    float nota = 0, soma = 0, media = 0;

    for (int i = 0; i < 4; i++)
    {
        cout << "Digite a primeira nota: ";
        cin >> nota;
        notas[i] = nota;

        if (i = 1)
        {
            cout << "Digite a segunda nota: ";
            cin >> nota;
            notas[i] = nota;
        }
        if (i = 2)
        {
            cout << "Digite a terceira nota: ";
            cin >> nota;
            notas[i] = nota;
        }
        if (i = 3)
        {
            cout << "Digite a quarta nota: ";
            cin >> nota;
            notas[i] = nota;
        }

        for (int j = 0; j < 4; j++)
        {
            soma = soma + notas[j];
            media = soma / 4;
        }

        cout << endl;
        cout << "A média é: " << media << endl;
    }
}