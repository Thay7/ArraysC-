// 05. Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene num vetor a média de cada aluno, imprima o número de alunos com média maior ou igual a 7.0.

#include <iostream>
using namespace std;

int main()
{
    float V[10];
    float nota1, nota2, nota3, nota4;
    float soma, media, cont = 0;

    for (int i = 0; i < 2; i++)
    {
        cout << "Digite a primeira nota do " << i + 1 << "º aluno: ";
        cin >> nota1;
        cout << "Digite a segunda nota do " << i + 1 << "º aluno: ";
        cin >> nota2;
        cout << "Digite a terceira nota do " << i + 1 << "º aluno: ";
        cin >> nota3;
        cout << "Digite a quarta nota do " << i + 1 << "º aluno: ";
        cin >> nota4;

        cout << "\n";
        
        soma = nota1 + nota2 + nota3 + nota4;
        media = soma / 4;

        V[i] = media;
    }
        for (int j = 0; j < 2; j++)
        {
            if (V[j] >= 7)
            { 
                cont++;
            }

            cout << "\n";
        }

        cout << cont << " alunos tem média maior ou igual a 7.";
    }
