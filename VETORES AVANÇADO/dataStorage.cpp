#include <iostream>
using namespace std;

int main()
{
    int opcao;
    string nome;
    int nota1;
    int nota2;

   while (opcao != 5)
    {
        cout << "            MENU" << endl;
        cout << "1 - Cadastrar aluno" << endl;
        cout << "2 - Consultar dados de aluno" << endl;
        cout << "3 - Alterar dados de aluno" << endl;
        cout << "4 - Consultar média da turma" << endl;
        cout << "5 - Sair" << endl;
        cout << "Opção: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1: 

            cout << "Nome do aluno: ";
            cin >> nome;
            cout << "Digite a nota 1: ";
            cin >> nota1;
            cout << "Digite a nota 2: ";
            cin >> nota2;
        break;

        }
    }
}