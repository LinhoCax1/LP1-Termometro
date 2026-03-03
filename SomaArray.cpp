#include <iostream>
using namespace std;

int main()
{
    int n [5];
    int soma = 0;

    cout << "Escolha 5 numeros:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
        soma = soma + n[i];
    }
    
    cout << "A soma dos elementos do array e: " << soma << endl;

    return 0;
}
