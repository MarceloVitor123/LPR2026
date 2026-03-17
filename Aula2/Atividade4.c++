#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;
int main() {
    setlocale(LC_ALL, "pt_BR.utf8"); 

int cod1, np1, cod2, np2;
double valor1, valor2, valorTotal;

cout << "Digite o código da peça 1: ";
cin >> cod1;
cout << "Digite o número de peças: ";
cin >> np1;
cout << "Digite o valor da peça: ";
cin >> valor1;
cout << "Digite o código da peça 2: ";
cin >> cod2;
cout << "Digite o número de peças: ";
cin >> np2;
cout << "Digite o valor da peça: ";
cin >> valor2;

valorTotal = (np1 * valor1) + (np2 * valor2);

if (np1 < 0 || valor1 < 0 || np2 < 0 || valor2 < 0)
{
cout << "Caso inválido";
}
else
{
cout << "O valor a pagar é: R$" << valorTotal << endl;
}
}