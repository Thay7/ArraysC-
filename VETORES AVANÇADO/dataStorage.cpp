//Escrever um aplicativo que possa armazenar o nome, as duas notas e a média dos alunos de uma turma. O aplicativo deverá apresentar o seguinte menu MENU 1 - Cadastrar aluno 2 - Consultar dados de aluno 3 - Alterar dados de aluno 4 - Consultar média da turma 5 - Sair Opção:

#include <iostream>
using namespace std;

int main()
{
    int opcao;
    string cadastrarNome;
    string consultarNome;
    string menu;
    float nota1;
    float nota2;
    float media;

   while (opcao != 5)
    {
        cout << "            MENU" << endl;
        cout << "1 - Cadastrar aluno" << endl;
        cout << "2 - Consultar dados de aluno" << endl;
        cout << "3 - Alterar dados de aluno" << endl;
        cout << "4 - Consultar média da turma" << endl;
        cout << "5 - Sair" << endl;
        cout << endl;
        cout << "Opção: ";
        cin >> opcao;

        switch (opcao)
        {
            
        case 1: 
        
            system("clear");
            cout << "      CADASTRAR ALUNO" << endl;
            cout << endl;
            cout << "Nome: ";
            cin >> cadastrarNome;
            cout << "Nota 1: ";
            cin >> nota1;
            cout << "Nota 2: ";
            cin >> nota2;
            
            media = (nota1+nota2)/2;
            
            cout << endl;
            cout << "Dados cadastrados com sucesso!";
            cout << endl;
            system("clear");
            
            if(menu == menu){
                
            }
            
        break;

        case 2: 
            
            cout << "Informe o nome do aluno: ";
            cin >> consultarNome;
            
            if(consultarNome == cadastrarNome)
            {
                cout << "Nota 1: " << nota1 << endl;
                cout << "Nota 2: " << nota2 << endl;
                cout << "Média: " << media;
                break;
            }
        }
    }
}
