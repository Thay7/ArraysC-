#include <iostream>
using namespace std;

int main()
{
    float media[10];
    float nota = 0;

    for(int i = 0; i >= 10; i++)
    {
            cout << "Digite a primeira nota do " << i+1 << "º aluno: ";
            cin >> nota; 
            cout << "Digite a segunda nota do " << i+1 << "º aluno: ";
            cin >> nota; 
            cout << "Digite a terceira nota do " << i+1 << "º aluno: ";
            cin >> nota; 
            cout << "Digite a quarta nota do " << i+1 << "º aluno: ";
            cin >> nota; 
            
                cout << endl; 
    }

}