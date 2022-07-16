#include <iostream>
#include <ctime>
using namespace std;

int main () {
    srand((unsigned)time(0));
    int V[5];

    for(int i = 0; i < 5; i++)
    {

        V[i] = rand();
        cout << V[i] << "\n";


    }


}