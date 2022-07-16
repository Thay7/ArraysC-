#include <iostream>
using namespace std;

int main()
{
    int V[20];
    int n;
    int cont;

    for(int i = 0; i < 20; i++)
    {
        cout << "Digite um valor: ";
        cin >> n;

        V[i] = n;
    }

    cout << "Digite um número para verificar se ele se encontra no vetor: ";

    if(n == V[i]) {
        cont++;
    }
}
