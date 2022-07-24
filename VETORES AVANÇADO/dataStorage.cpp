// Escrever um aplicativo que possa armazenar o nome, as duas notas e a média dos alunos de uma turma. O aplicativo deverá apresentar o seguinte menu MENU 1 - Cadastrar aluno 2 - Consultar dados de aluno 3 - Alterar dados de aluno 4 - Consultar média da turma 5 - Sair Opção:

#include <iostream>
using namespace std;

struct Aluno
{
    string nome;
    float nota1;
    float nota2;
    float media;
};

int main()
{
    int tamanho = 10;
    struct Aluno alunos[tamanho];
    int totalDeAlunosCadastrados = 0;
    int opcao;
    float media;
    string nomeParaConsultar;
    string nomeParaAlterar;
    string aux;
    float auxNota;
    float somaMediaTurma = 0;
    float mediaDaTurma = 0;

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

        system("clear");

        switch (opcao)
        {

        case 1:
        {
            cout << "      CADASTRAR ALUNO" << endl;
            cout << endl;

            cout << "Nome: ";
            cin >> alunos[totalDeAlunosCadastrados].nome;
            cout << "Nota 1: ";
            cin >> alunos[totalDeAlunosCadastrados].nota1;
            cout << "Nota 2: ";
            cin >> alunos[totalDeAlunosCadastrados].nota2;

            media = (alunos[totalDeAlunosCadastrados].nota1 + alunos[totalDeAlunosCadastrados].nota2) / 2;

            alunos[totalDeAlunosCadastrados].media = media;
            totalDeAlunosCadastrados++;

            somaMediaTurma += media;

            system("clear");
            break;
        }

        case 2:
        {
            cout << "       CONSULTAR DADOS" << endl;
            cout << "Informe o nome do aluno: ";
            cin >> nomeParaConsultar;

            for (int i = 0; i < tamanho; i++)
            {

                if (nomeParaConsultar == alunos[i].nome)
                {
                    cout << "Nota 1: " << alunos[i].nota1 << endl;
                    cout << "Nota 2: " << alunos[i].nota2 << endl;
                    cout << "Média: " << alunos[i].media << endl;
                }
            }
            break;
        }

        case 3:
        {
            cout << "Informe o nome do aluno: ";
            cin >> nomeParaAlterar;

            cout << endl;

            for (int i = 0; i < tamanho; i++)
            {

                if (nomeParaAlterar == alunos[i].nome)
                {
                    cout << "Digite o novo nome para alterar ou 0 para pular: ";
                    cin >> aux;

                    if (aux != "0")
                    {

                        alunos[i].nome = aux;
                    }

                    cout << endl;

                    cout << "Nota 1: \nDigite a nova nota para alterar ou 0 para pular: ";
                    cin >> auxNota;

                    if (auxNota != 0)
                    {

                        alunos[i].nota1 = auxNota;
                    }

                    cout << "Nota 2: \nDigite a nova nota para alterar ou 0 para pular: ";
                    cin >> auxNota;

                    if (auxNota != 0)
                    {

                        alunos[i].nota2 = auxNota;
                    }
                }
            }
            break;
        }

        case 4:
        {
            mediaDaTurma = somaMediaTurma/totalDeAlunosCadastrados;

            cout << "A média da turma é: " << mediaDaTurma << endl;
        }
        }
    }
}
