//Faça um Programa que leia 4 notas, mostre as notas e a média na tela.

#include <iostream>
using namespace std;

int main()
{

    float notas[4];
    float nota = 0, soma = 0, media = 0;

    for (int i = 0; i < 4; i++)
    {
        cout << "Digite a " << i+1 << "ª nota: ";
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
