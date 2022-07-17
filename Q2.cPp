//Faça um Programa que preencha um vetor de 10 números reais e mostre-os na ordem inversa.

#include <iostream>
#include <ctime>
using namespace std;

int main () {
    srand((unsigned)time(0));
    float V[10];

    for(int i = 0; i < 10 ; i++)
    {

        V[i] = i + 1;

    }
    
    for(int i = 9; i >= 0; i--)
    {
        
        cout << V[i] << endl;
        
    }


}