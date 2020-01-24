#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>

using namespace std;

string Caracteres = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                     'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                     '!', '@', '#', '$', '%', '&', '.', '-', '+'};
int Tam = 15, NSenhas = 40;

int main()
{
    srand(time(NULL));
    system("cls");
    cout << "Teste gerador de senhas C++" << endl;
    cout << "Caracteres utilizados para gerar:" << endl;
    cout << endl
         << Caracteres << endl;

    cout << endl
         << "##############################################" << endl;

    cout << "Seed: " << rand() << endl;
    cout << "Tamanho: " << Caracteres.length() << endl;
    int N = rand() % (Caracteres.length());
    cout << "Numero: " << N << endl;
    cout << "Caracter aleatorio: " << Caracteres[N] << endl;

    cout << endl
         << "##############################################" << endl;
    cout << "Senhas:" << endl;

    for (int i = 0; i < NSenhas; i++)
    {
        cout << (i + 1) << " -\t";
        for (int i = 0; i <= Tam; i++)
        {
            cout << Caracteres[rand() % (Caracteres.length())];
        }
        cout << endl;
    }

    return 0;
}