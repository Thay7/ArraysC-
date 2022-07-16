#include <iostream>
using namespace std;

int main(int argc, char const *agrv[])
{
    srand((unsigned)time(0));
    int maior = 10, menor = 1, aleatorio, x;
    int A[10];

    for (int i = 0; i < 10; i++)
    {
        aleatorio = rand() % (maior - menor + 1) + menor;
        A[i] = aleatorio;

        cout << "Digite um número entre 1 e 10: ";
        cin >> x;

        if (x == A[i])
        {
            cout << "ACHEI!";
            break;
        }
        else
        {
            cout << "NÃO ACHEI!";
            break;
        }
    }
}
